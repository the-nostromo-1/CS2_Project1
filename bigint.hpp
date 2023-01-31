/*
bigint hpp file
Created: 01/25/2023
David J Tinley
*/

#ifndef _BIGINT_HPP_
#define _BIGINT_HPP_

#include <iostream>

const int CAPACITY = 200;

class bigint
{
public:
    bigint();    // default constructor
    bigint(int); // constructor initializing int values in bigint array from user input
    bigint(const char bg_array[]);
    bool operator==(const bigint &rhs); // equality operator overload
    void debugPrint(std::ostream &) const;
    friend std::ostream &operator<<(std::ostream &out, const bigint &rhs); // insertion operator overload
private:
    int big_int_array[CAPACITY];
};

#endif