#include "math_utils.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <a> <b>" << std::endl;
        return 1;
    }
    int a = std::stoi(argv[1]);
    int b = std::stoi(argv[2]);
    int result = MathUtils::add(a, b);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
