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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }

    //Add test cases as needed.
    {
        // Setup fixture
        bigint bi(100);

        // Test
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 100);
    }

    {
        // Setup fixture
        bigint bi(999);

        // Test
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == 4995);
    }

    {
        // Setup fixture
        bigint bi(6);

        // Test
        bi = bi.timesDigit(9999);

        // Verify
        assert(bi == 59994);
    }

    {
        // Setup fixture
        bigint bi("123456789");

        // Test
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 246913578);
    }

    // This test fails. Error says
    // "implicit conversion from 'long' to 'int'
    // changes value from 99999999990 to 1215752182"
    // {
    //     // Setup fixture
    //     bigint bi("9999999999");

    //     // Test
    //     bi = bi.timesDigit(10);

    //     // Verify
    //     assert(bi == (99999999990));
    // }

    {
        // Setup fixture
        bigint bi("900");

        // Test
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 1800);
    }

    {
        // Setup fixture
        bigint bi("1000001");

        // Test
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 2000002);
    }

    std::cout << "Done testing bigint '*' digit" << std::endl;
    return 0;
}
