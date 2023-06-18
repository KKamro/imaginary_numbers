#include "complex_number.hpp"

void ComplexNumber::print_number() const
{
    if(this->imaginary>0.0f)
        std::cout << this->real << " + " << this->imaginary;
    else
        std::cout << this->real << " - " << this->imaginary;
}

void ComplexNumber::set_number(double r, double i) 
{
    this->real = r;
    this->imaginary = i;
}

double ComplexNumber::get_module() const
{
    return sqrt(pow(this->real,2) + pow(this->imaginary,2));
}

void ComplexNumber::print_trig() const
{
    double r = get_module();
    double phi = atan((this->imaginary)/(this->real)) * 180/PI;
    std::cout << r << "(sin" << phi << " + jcos" << phi << ")";
}

ComplexNumber::ComplexNumber(double r, double i)
    : real{r}, imaginary{i}
{
    
}

ComplexNumber::ComplexNumber(const ComplexNumber &source)
    : ComplexNumber{source.real,source.imaginary}
{

}


