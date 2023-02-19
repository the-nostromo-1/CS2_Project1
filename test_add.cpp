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

    //assert(1 == 2); // WRONG. This will fail, of course.
                  // You need to add more test cases here. Remove this assert.
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
    //{
    // // setup
    // bigint left("95454452345246435634565625524524352352");
    // bigint right("5524543542524657254352435234526564536");
    // bigint result;

    // // test
    // result = left + right;

    // // verify
    // assert(left == "95454452345246435634565625524524352352");
    // assert(right == "5524543542524657254352435234526564536");
    // assert(result == 14);
    // }

    std::cout << "Done with testing addition." << std::endl;
    return 0;
}
