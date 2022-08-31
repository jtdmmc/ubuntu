#include "swap.h"

void swap::run()
{
    int tmp = _a;
    _a = _b;
    _b = tmp;
}

void swap::printInfo()
{
    std::cout << "_a = " << _a << std::endl;
    std::cout << "_b = " << _b << std::endl;
}