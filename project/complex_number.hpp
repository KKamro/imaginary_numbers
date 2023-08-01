#pragma once

#include <iomanip>
#include <fstream>
#include <string>
#include <iostream>
#include <cmath>

namespace CmplxNum
{

class ComplexNumber{
    private:
        static constexpr double PI = 3.14f;
        double real;
        double imaginary;
    public:
        //Constructors
        ComplexNumber(double r = 0, double i = 0);
        ComplexNumber(const ComplexNumber &source);
        //Methods
        void set_number(double r, double i);
        double get_module() const;
        void print_number() const;
        void print_trig() const;

        //Operator overloading
        ComplexNumber operator+(const ComplexNumber &rhs)
        {
         ComplexNumber tmp;
            tmp.real = this->real + rhs.real;
            tmp.imaginary = this->imaginary + rhs.imaginary;
            return tmp;
        }

        //Save to file
        static bool SaveToFile(const CmplxNum::ComplexNumber &a);
        
};
}
