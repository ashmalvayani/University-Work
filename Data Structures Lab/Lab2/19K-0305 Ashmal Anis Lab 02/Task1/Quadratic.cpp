#include "Quadratic.h"

Quadratic_Equation::Quadratic_Equation(){
    a=0;
    b=0;
    c=0;
}
Quadratic_Equation::Quadratic_Equation(float a, float b, float c){
    this->a=a;
    this->b=b;
    this->c=c;
}
void Quadratic_Equation:: Calculate_Roots(){
    float d, root1, root2;
    d= pow(b,2)-(4*a*c);
    if(d<0){
        cout << "\nRoots of the quadratic equation are complex and imaginary." << endl;
        cout << "Roots are : " << -b/(2*a) << "+" << sqrt(-d)/(2*a) << "i , " << -b/(2*a) << "+" << -sqrt(-d)/(2*a) << "i"<< endl;
    }
    if(d>0){
        cout << "\nRoots are Real and Distinct."<<endl;
        root1= (-b + sqrt(d)) / (2.0*a);
        root2= (-b - sqrt(d)) / (2.0*a);
        cout << "Roots are : " << root1 << " , " << root2 << endl;
    }
    if(d==0){
        cout << "\nRoots are Real and Equal."  << endl;
        root1= -b/(2*a);
        cout << "Roots are : " << root1 << " , " << root2 << endl;
    }
}
