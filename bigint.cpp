/*
 * bigint cpp file
 * Created: 01/25/2023
 * David J Tinley
 */

#include "bigint.hpp"

bigint::bigint() // default constructor
{
    for (int i = 0; i < capacity; ++i) // filling bigint array with 0's
    {
        bi_arrs[i] = 0;
    }
}

bigint::bigint(int x) : bigint() // constructor initializing int with user choice
{
    for (int i = 0; i < capacity; ++i)
    {
        bi_arrs[i] = x % 10;
        x /= 10;
    }
}

bigint::bigint(const char big_int_array[]) : bigint()
{
    int length = 0;
    while (big_int_array[length] != '\0') // '\0' = null terminating character
    {
        ++length;
    }
}

std::ostream &operator<<(std::ostream &out, const bigint &bi) // insertion operator overload
{
    out << bi.bi_arrs << std::endl;
    return out;
}
