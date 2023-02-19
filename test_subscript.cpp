// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(digit == 4);
    }
    
    // Add test cases!!

    {
        // Setup
        bigint bi(52);

        // Test 
        int digit = bi[0];
        int digit1 = bi[1];

        // Verify
        assert(digit == 2);
        assert(digit1 == 5);
    }

    {
        // Setup
        bigint bi(999);

        // Test 
        int digit = bi[0];
        int digit1 = bi[1];
        int digit2 = bi[2];

        // Verify
        assert(digit == 9);
        assert(digit1 == 9);
        assert(digit2 == 9);
    }

    {
        // Setup
        bigint bi(123456789);

        // Test 
        int digit = bi[0];
        int digit1 = bi[1];
        int digit2 = bi[2];
        int digit3 = bi[3];
        int digit4 = bi[4];
        int digit5 = bi[5];

        // Verify
        assert(digit == 9);
        assert(digit1 == 8);
        assert(digit2 == 7);
        assert(digit3 == 6);
        assert(digit4 == 5);
        assert(digit5 == 4);
    }

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

