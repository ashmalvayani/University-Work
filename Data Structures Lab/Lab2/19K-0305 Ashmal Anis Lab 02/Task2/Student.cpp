#include "Student.h"

Student:: Student(string ID, string b, string dis, int year, string cour[]){
	this->ID = ID;
	batch= b;
	discipline= dis;
	grad_year = year;
	for(int i=0; i<3; i++){
		courses[i]=cour[i];
	}
}
Student:: Student(){}

void Student:: Display(){
	cout << "ID: " << ID << endl;
	cout << "Batch: " << batch << endl;
	cout << "Discipline: " << discipline << endl;
	cout << "Expected Graduation Year: " << grad_year << endl;
	cout << "Registered Courses : ";
	for(int i=0; i<3; i++)
		cout << courses[i] << " ";
	cout << endl << endl;
}
