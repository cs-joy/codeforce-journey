#include <iostream>
#include <string>

namespace Hover {
    /**
     * - Return something when dev hovering the function coutln()
     * 
     * - go to `test.cpp` and check the effect if this text
    */
    void coutln(std::string str) {
        std::cout << str << std::endl;
    }
}