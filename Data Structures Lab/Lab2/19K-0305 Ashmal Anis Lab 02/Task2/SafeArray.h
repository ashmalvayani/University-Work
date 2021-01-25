#include <iostream>
#include "Student.h"
using namespace std;

#ifndef SafeArray_H
#define SafeArray_H

class SafeArray{
	private:
		Student *stu;
		int total;
	public:
		SafeArray();
		SafeArray(int);
		void SetStudent(Student&, int);
		Student& operator[](int);
		void Display(int);
};

#endif
