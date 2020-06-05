#include <iostream>
#include "src/probCalc.h"

int main() {
    auto test = probabilityCalculator(200);

    std::cout << test.calculate(100, 100);
    return 0;
}
