#include "complex_number.hpp"

void CmplxNum::ComplexNumber::print_number() const
{
    if(this->imaginary>0.0f)
        std::cout << this->real << " + " << this->imaginary;
    else
        std::cout << this->real << " - " << this->imaginary;
}

void CmplxNum::ComplexNumber::set_number(double r, double i) 
{
    this->real = r;
    this->imaginary = i;
}

double CmplxNum::ComplexNumber::get_module() const
{
    return sqrt(pow(this->real,2) + pow(this->imaginary,2));
}

void CmplxNum::ComplexNumber::print_trig() const
{
    double r = get_module();
    double phi = atan((this->imaginary)/(this->real)) * 180/PI;
    std::cout << r << "(sin" << phi << " + jcos" << phi << ")";
}

CmplxNum::ComplexNumber::ComplexNumber(double r, double i)
    : real{r}, imaginary{i}
{
    
}

CmplxNum::ComplexNumber::ComplexNumber(const ComplexNumber &source)
    : ComplexNumber{source.real,source.imaginary}
{

}

bool CmplxNum::ComplexNumber::SaveToFile(const CmplxNum::ComplexNumber &a)
{
    std::ofstream file {"file.txt"};
    if(!file.is_open()) return false;
    file << a.real << " + " << a.imaginary << std::endl;
    file.close();
    return true;
}

