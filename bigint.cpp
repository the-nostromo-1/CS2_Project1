/*
bigint cpp file
Created: 01/25/2023
David J Tinley
*/

#include "bigint.hpp"

bigint::bigint() // default constructor
{
    for (int i = 0; i < CAPACITY; ++i) // filling bigint array with 0's
    {
        big_int_array[i] = 0;
    }
}

bigint::bigint(int x) : bigint() // constructor initializing int with user choice
{
    for (int i = 0; i < CAPACITY; ++i)
    {
        big_int_array[i] = x % 10;
        x /= 10;
    }
}

bigint::bigint(const char bg_array[]) : bigint() // : bigint() calls default constructor before newly defined constructor
{
    int length = 0;
    while (bg_array[length] != '\0') // '\0' = null terminating character
    {
        ++length;
    }
    int looping_tracker = length;
    int number;
    for (int j = 0; j < looping_tracker; ++j)
    {
        number = int(bg_array[length - 1] - int('0'));
        big_int_array[j] = number;
        --length;
    }
    // seperate the array of characters ("1234") into individual digits
    // use ascii codes to convert the individual char's to int's
    // ascii digit number codes:
    // 0 = 48, 1 = 49, 2 = 50, 3 = 51, 4 = 52, 5 = 53, 6 = 54, 7 = 55, 8 = 56, 9 = 57
}

bool bigint::operator==(const bigint &rhs)
{
    for (int i = 0; i < CAPACITY; ++i)
    {
        if (big_int_array[i] != rhs.big_int_array[i])
        {
            return false;
        }
    }
    return true;
}

std::ostream &operator<<(std::ostream &out, const bigint &rhs) // insertion operator overload
{
    int j = CAPACITY;
    while (rhs.big_int_array[j - 1] == 0)
    {
        --j;
    }
    int n_capacity = j - 80;
    if (j <= 0)
    {
        out << "0" << std::endl;
    }
    if (j > 80)
    {
        for (int i = j - 1; i > n_capacity; --i)
        {
            out << rhs.big_int_array[i];
        }
        out << std::endl;
        for (int i = n_capacity; i >= 0; --i)
        {
            out << rhs.big_int_array[i];
        }
        out << std::endl;
    }
    else
    {
        for (int i = j - 1; i >= 0; --i)
        {
            out << rhs.big_int_array[i];
        }
        out << std::endl;
    }
    return out;
}

void bigint::debugPrint(std::ostream &out) const
{
    for (int i = CAPACITY - 1; i > 0; --i)
    {
        out << big_int_array[i] << " | ";
    }
}
