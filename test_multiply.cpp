// bigint Test Program
//
// Tests:  multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main()
{

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == 0);
        assert(right == 0);
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == 1);
        assert(right == 0);
        assert(result == 0);
        std::cout << "left(1) * right(0) == result(0)" << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == 0);
        assert(right == 1);
        assert(result == 0);
        std::cout << "left(0) * right(1) == result(0)" << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == 123);
        assert(right == 56);
        assert(result == 6888);
        std::cout << "left(123) * right(56) == result(6888)" << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == 65);
        assert(right == 321);
        assert(result == 20865);
        std::cout << "left(65) * right(321) == result(20865)" << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == 9999);
        assert(right == 2);
        assert(result == 19998);
        std::cout << "left(9999) * right(2) == result(19998)" << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == 2);
        assert(right == 999999);
        assert(result == 1999998);
        std::cout << "left(2) * right(999999) == result(1999998)" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == 99);
        assert(right == 99);
        assert(result == 9801);
        std::cout << "left(99) * right(99) == result(9801)" << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == "2222");
        assert(right == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
        std::cout << "left(2222) * right(888888888888888888888888888888888888) == result(1975111111111111111111111111111111109136)" << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == "777777777777777777777777777777777777777777777");
        assert(right == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
        std::cout << "left(777777777777777777777777777777777777777777777) * right(333333) == result(259258999999999999999999999999999999999999999740741)" << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left == "111111111111111111111111111111111111111111");
        assert(right == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
        std::cout << "left(111111111111111111111111111111111111111111) * right(999999999999999999999999999999999999999999) == result(111111111111111111111111111111111111111110888888888888888888888888888888888888888889)" << std::endl;
    }

    // Add test cases as needed.
    {
        // setup
        bigint left("666");
        bigint right("666");
        bigint result;

        // test
        result = left * right;

        // verify
        assert(left == "666");
        assert(right == "666");
        assert(result == "443556");
        std::cout << "left(666) * right(666) == result(443556)" << std::endl;
    }

    std::cout << "Done testing multiply" << std::endl;
    std::cout << std::endl;
    return 0;
}
