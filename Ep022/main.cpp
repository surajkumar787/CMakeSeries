#include <iostream>
#include "calculator.h"

int main(){
    Calculator calc;
    std::cout << "add(3, 4) : " << calc.add(3, 4) << std::endl;
    std::cout << "sub(3, 4) : " << calc.sub(3, 4) << std::endl;
    std::cout << "mul(3, 4) : " << calc.mul(3, 4) << std::endl;
    std::cout << "div(3, 4) : " << calc.div(3, 4) << std::endl;
    std::cout << "mod(3, 4) : " << calc.mod(3, 4) << std::endl;
    return 0;
}