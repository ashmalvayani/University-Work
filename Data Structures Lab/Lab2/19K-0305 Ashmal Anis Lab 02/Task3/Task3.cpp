#include <iostream>
#include "Car.h"
#include "Car.cpp"

int main (){
	Car c1("White","Ferrari",2500000.75,2018);
	Car c2= Car(c1);
	Car c3;
	c3=c2;
	cout << "\nDisplaying 1st Car information : \n";
	c1.display();
	cout << "\nDisplaying 2nd Car information : \n";
	c2.display();
	cout << "\nDisplaying 3rd Car information : \n";
	c3.display();
	
	return 0;
}
