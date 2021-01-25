#include <iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student{
	private:
		string ID;
		string batch;
		string discipline;
		int grad_year;
		string courses[3];
	public:
		Student(string, string, string, int, string[]);
		Student();
		void Display();
};

#endif
