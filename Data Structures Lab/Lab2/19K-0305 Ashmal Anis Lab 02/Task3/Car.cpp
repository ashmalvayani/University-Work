#include "Car.h"

Car:: Car(char* c, char* m, double p, int y){
	color=c;
	model=m;
	price=p;
	year=y;
}
Car:: Car(const Car& c){
	color = strdup(c.color);
	model = strdup(c.model);
	price = c.price;
	year = c.year;
}		
Car :: Car(){}

Car& Car :: operator=(const Car& c){
	color = strdup(c.color);
	model = strdup(c.model);
	price = c.price;
	year = c.year;
	return *this;
}
Car:: ~Car(){
}

void Car:: display(){
	cout << "\nColor : " << color << "\n";
	cout << "Model : " << model  << "\n";
	cout << "Price : " << price  << "\n";
	cout << "Year : " << year  << "\n";
}

