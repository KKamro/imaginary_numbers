#include <iostream>

#include "ImgNum.hpp"

int main(void)
{
    Imaginary_Number zespolona;
    zespolona.set_number(6, 8);
    zespolona.print_number();
    double modul = zespolona.get_abs();
    std::cout << std::endl << "Module: " << modul;
    return 0;
}