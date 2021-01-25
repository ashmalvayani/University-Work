#include <iostream>
#include <cmath>
using namespace std;


#ifndef Quadratic_H
#define Quadratic_H

class Quadratic_Equation{
    private:
        float a,b,c;

    public:
        Quadratic_Equation();
        Quadratic_Equation(float, float, float);
        void Calculate_Roots();
};

#endif