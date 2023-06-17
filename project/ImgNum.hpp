#pragma once

#include <iostream>
#include <cmath>

class Imaginary_Number{
    private:
        const double PI = 3.14f;
        double real;
        double imaginary;
    public:
        void print_number() const;
        void set_number(double r, double i);
        double get_module() const;
        void print_trig() const;
};