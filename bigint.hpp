//
// bigint.hpp file
// Created: 01/25/2023
// David J Tinley
//

#ifndef _BIGINT_HPP_
#define _BIGINT_HPP_

#include <iostream>

const int CAPACITY = 500;

class bigint {
    public:
        // Constructors
        bigint(); // default constructor
        bigint(int x); // constructor initializing int values in bigint array from user input
        bigint(const char bg_array[]);

        // Class methods
        bigint timesDigit(int x) const;
        bigint times10(int x) const;
        void debugPrint(std::ostream &) const;

        // Operator overloads
        bigint operator+(bigint const &rhs) const;
        bigint operator*(const bigint &rhs) const;
        int operator[](int x) const;
        bool operator==(const bigint &rhs) const; // equality operator overload

        // Friend Functions (istream & ostream overloads)
        friend std::ostream &operator<<(std::ostream &out, const bigint &rhs);
        friend std::istream &operator>>(std::istream &in, bigint &rhs);
        
    private:
        int big_int_array[CAPACITY];
};

#endif
