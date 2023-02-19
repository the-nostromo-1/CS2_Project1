// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main()
{
    {
    // VERY INCOMPLETE set of tests.
    //------------------------------------------------------
    // Setup fixture
    bigint left(0);
    bigint right(0);
    bigint result;

    // Test
    result = left + right;

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
    result = left + right;

    // Verify
    assert(left == 1);
    assert(right == 0);
    assert(result == 1);
    }

    {
    //------------------------------------------------------
    // Setup fixture
    bigint left(1);
    bigint right(1);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 1);
    assert(right == 1);
    assert(result == 2);
    }

    {
    // Add test cases as needed.
    // setup
    bigint left(9);
    bigint right(5);
    bigint result;

    // test
    result = left + right;

    // verify
    assert(left == 9);
    assert(right == 5);
    assert(result == 14);
    }

    {
    // setup
    bigint left(200);
    bigint right(500);
    bigint result;

    // test
    result = left + right;

    // verify
    assert(left == 200);
    assert(right == 500);
    assert(result == 700);
    }

    {
    // setup
    bigint left("2000");
    bigint right("5000");
    bigint result;

    // test
    result = left + right;

    // verify
    assert(left == "2000");
    assert(right == "5000");
    assert(result == 7000);
    }

    std::cout << "Done with testing addition." << std::endl;
    return 0;
}
