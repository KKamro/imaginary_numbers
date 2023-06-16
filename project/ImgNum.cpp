#include "ImgNum.hpp"

void Imaginary_Number::print_number()
{
    if(this->imaginary>0.0f)
        std::cout << this->real << " + " << this->imaginary;
    else
        std::cout << this->real << " - " << this->imaginary;
}

void Imaginary_Number::set_number(double r, double i)
{
    this->real = r;
    this->imaginary = i;
}

double Imaginary_Number::get_abs()
{
    return sqrt(pow(this->real,2) + pow(this->imaginary,2));
}