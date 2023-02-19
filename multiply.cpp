//
// multiply.cpp
// David J Tinley
//

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-2.txt");      // Open a file
    if(!in) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(1);
    }

    while (!in.eof()) {
        bigint bi1 ,bi2, biResult;
        in >> bi1;
        in >> bi2;
        std::cout << "Bigint 1 is:" << std::endl;
        std::cout << bi1 << std::endl;
        std::cout << "Bigint 2 is:" << std::endl;
        std::cout << bi2 << std::endl;
        biResult = bi1 * bi2;
        std::cout << "Bigint 1 * Bigint 2 is:" << std::endl;
        std::cout << biResult << std::endl;
    }

    in.close();
    return 0;
}