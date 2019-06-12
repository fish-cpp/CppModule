#include <iostream>
#include "./lib/math.cpp"
#include "./lib/math2.cpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << add(3, 4) << std::endl;
    std::cout << math::add(3.3, 4.4) << std::endl;
    return 0;
}