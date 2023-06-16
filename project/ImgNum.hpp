#pragma once

#include <iostream>
#include <cmath>
class Imaginary_Number{
    private:
        double real;
        double imaginary;
    public:
        void print_number();
        void set_number(double r, double i);
        double get_abs();
};