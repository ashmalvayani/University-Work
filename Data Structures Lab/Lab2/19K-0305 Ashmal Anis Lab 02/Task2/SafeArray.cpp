#include "SafeArray.h"

SafeArray:: SafeArray(){}

SafeArray:: SafeArray(int total){
	this->total = total;
	stu = new Student[total];
}

void SafeArray:: SetStudent(Student& s, int index){
	stu[index] = s;
}

Student& SafeArray:: operator[](int index){
	if(index <0 || index > total){
		cout << "Array out of bound, exitting.";
		exit(0);
	}
	return stu[index];
}

void SafeArray:: Display(int index){
	stu[index].Display();
}
