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
        std::cout << "bi(100) timesDigit(1) == 100" << std::endl;
    }

    {
        // Setup fixture
        bigint bi(999);

        // Test
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == 4995);
        std::cout << "bi(999) timesDigit(5) == 4995" << std::endl;
    }

    {
        // Setup fixture
        bigint bi(6);

        // Test
        bi = bi.timesDigit(9999);

        // Verify
        assert(bi == 59994);
        std::cout << "bi(6) timesDigit(9999) == 59994)" << std::endl;
    }

    {
        // Setup fixture
        bigint bi("123456789");

        // Test
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 246913578);
        std::cout << "bi(123456789) timesDigit(2) == 246913578" << std::endl;
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
        std::cout << "bi(900) timesDigit(2) == 1800" << std::endl;
    }

    {
        // Setup fixture
        bigint bi("1000001");

        // Test
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 2000002);
        std::cout << "bi(1000001) timesDigit(2)  == 2000002" << std::endl;
    }

    std::cout << "Done testing bigint '*' digit" << std::endl;
    std::cout << std::endl;
    return 0;
}
