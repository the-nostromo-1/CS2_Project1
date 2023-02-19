//
// bigint.cpp file
// Created: 01/25/2023
// David J Tinley
//

#include "bigint.hpp"

//
// Friend Functions
//
bool inRange(const int low, const int high, int numParam) {
    // Keeps arrayLength from not counting the length of an array that
    // has a 0 in it that is not at the end. ex: 1230456
    return (numParam >= low && numParam <= high);
}

//
// Class constructors
//
bigint::bigint() { // default constructor
    for (int i = 0; i < CAPACITY; ++i) { // filling bigint array with 0's
        big_int_array[i] = 0;
    }
}

bigint::bigint(int x) : bigint() {
    for (int i = 0; i < CAPACITY; ++i) {
        big_int_array[i] = x % 10;
        x /= 10;
    }
}

bigint::bigint(const char bg_array[]) : bigint() {
    int length = 0;
    while (bg_array[length] != '\0') { // '\0' = null terminating character
        ++length;
    }
    int looping_tracker = length;
    for (int j = 0; j < looping_tracker; ++j) {
        int number = int(bg_array[length - 1] - int('0'));
        big_int_array[j] = number;
        --length;
    }
}

//
// Bigint method definitions
//
void bigint::debugPrint(std::ostream &out) const
{
    for (int i = CAPACITY - 1; i > 0; --i)
    {
        out << big_int_array[i] << " | ";
    }
}

int bigint::arrayLength() const {
    int resultLength = 0;
    while (big_int_array[resultLength] != 0 || inRange(1, 9, big_int_array[resultLength + 1])) {
        ++resultLength;
    }
    return resultLength;
}

bigint bigint::timesDigit(int x) const {
    bigint result(0);
    int remainder = 0;
    for (int i = 0; i < CAPACITY; ++i) {
        remainder = big_int_array[i] * x + remainder;
        result.big_int_array[i] = remainder % 10;
        remainder /= 10;
    }
    return result;
}

bigint bigint::times10(int x) const {
    bigint result;
    for (int i = CAPACITY - x - 1; i >= 0; --i) {
        result.big_int_array[i + x] = big_int_array[i];
    }
    return result;
}

//
// Operator overload definitions
//
int bigint::operator[](int x) const {
    if (x >= CAPACITY || x < 0) {
        std::cout << "Out of bounds" << std::endl;
        exit (0);
    }
    return big_int_array[x];
}

std::ostream &operator<<(std::ostream &out, const bigint &rhs) {
    int j = CAPACITY;
    while (rhs.big_int_array[j - 1] == 0) {
        --j; // eliminating leading zero's
    }
    int n_capacity = j - 80;
    if (j <= 0) {
        out << "0" << std::endl;
    }
    if (j > 80) {
        for (int i = j - 1; i > n_capacity; --i) {
            out << rhs.big_int_array[i];
        }
        out << std::endl;
        for (int i = n_capacity; i >= 0; --i) {
            out << rhs.big_int_array[i];
        }
        out << std::endl;
    }
    else {
        for (int i = j - 1; i >= 0; --i) {
            out << rhs.big_int_array[i];
        }
        out << std::endl;
    }
    return out;
}

std::istream &operator>>(std::istream &in, bigint &rhs) {
    char number = '.';
    char numberArray[CAPACITY];
    int i = 0;
    do {
        in >> number;
        if (number != ';' && number >= '0' && number <= '9') {
            numberArray[i] = number;
            ++i;
        }
    } while (number != ';' && in); 
    int newCapacity = i;
    for (int j = 0; j < newCapacity; ++j) {
        int characterInt = numberArray[i - 1] - int('0');
        rhs.big_int_array[j] = characterInt;
        --i;
    }

    return in;
}

bigint bigint::operator+(const bigint &rhs) const {
    bigint result(0);
    int carryOver = 0;
    for (int i = 0; i < CAPACITY; i++) {
        int sum = big_int_array[i] + rhs.big_int_array[i] + carryOver;
        result.big_int_array[i] = sum % 10;
        carryOver = sum / 10;
    }
    return result;
}

bigint bigint::operator*(const bigint &rhs) const {
    bigint temp;
    bigint product;

    for (int i = 0; i < CAPACITY - 1; ++i) {
        temp = this->timesDigit(rhs.big_int_array[i]);
        product = product + temp.times10(i);

    }
    return product;
}

bool bigint::operator==(const bigint &rhs) const {
    for (int i = 0; i < CAPACITY; ++i)
    {
        if (big_int_array[i] != rhs.big_int_array[i])
        {
            return false;
        }
    }
    return true;
}
