#include <iostream>
#include "Quadratic.h"
#include "Quadratic.cpp"

using namespace std;

int main(){
	Quadratic_Equation Q1(1,10,5);
	Q1.Calculate_Roots();
	
	Quadratic_Equation Q2(1,3,5);
	Q2.Calculate_Roots();

	return 0;
}
