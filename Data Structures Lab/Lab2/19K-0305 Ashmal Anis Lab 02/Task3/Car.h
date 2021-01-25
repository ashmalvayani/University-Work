#include <iostream>
#include <cstring>
using namespace std;

#ifndef CAR_H
#define CAR_H

class Car{
	private:
		char* color;
		char* model;
		double price;
		int year;
	public:
		Car();
		Car(char* c, char* m, double p, int y);
		Car(const Car& c);
		Car& operator=(const Car& c);
		void display();
		~Car();
};

#endif
