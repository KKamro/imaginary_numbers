#include <iostream>
#include "complex_number.hpp"

int main(void)
{
    CmplxNum::ComplexNumber zespolona1, zespolona2{1,1}, suma;
    zespolona1.set_number(1, 6);
    zespolona1.print_number();
    double modul = zespolona1.get_module();
    std::cout << std::endl << "Module: " << modul 
    << std::endl << "Polar form: ";  
    zespolona1.print_trig();
    suma = zespolona1 + zespolona2;
    suma.print_number();
    CmplxNum::ComplexNumber::SaveToFile(zespolona1);
    return 0;
}