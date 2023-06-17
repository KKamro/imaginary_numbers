#include <iostream>
#include "ImgNum.hpp"

int main(void)
{
    Imaginary_Number zespolona;
    zespolona.set_number(1, 6);
    zespolona.print_number();
    double modul = zespolona.get_module();
    std::cout << std::endl << "Module: " << modul 
    << std::endl << "Polar form: ";  
    zespolona.print_trig();
    return 0;
}