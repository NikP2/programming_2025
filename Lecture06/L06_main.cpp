#include <iostream>
#include "L06.hpp"

int main() {
    std::cout << mt::n << std::endl;
    mt::n = 20;
    std::cout << mt::n << std::endl;
    return 0;
}