// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == 30);
    }
    
    //Add test cases as needed.
    {
        // Setup fixture
        bigint bi(600);

        // Test
        bi = bi.times10(1);

        // Verify
        assert(bi == 6000);
    }

    {
        // Setup fixture
        bigint bi(3);

        // Test
        bi = bi.times10(5);

        // Verify
        assert(bi == 300000);
    }

    {
        // Setup fixture
        bigint bi(99);

        // Test 
        bi = bi.times10(5);

        // Verify
        assert(bi == 9900000);
    }

    {
        // Setup fixture
        bigint bi("9876543210");

        // Test
        bi = bi.times10(5);

        // Verify
        assert(bi == "987654321000000");
    }

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

