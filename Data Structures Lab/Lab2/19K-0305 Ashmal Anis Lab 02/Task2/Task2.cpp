#include "Student.cpp"
#include "Student.h"
#include "SafeArray.cpp"
#include "SafeArray.h"
#include <iostream>
using namespace std;

int main (){
	string course[]={"LA", "DISCRETE","Psychology"};
	Student s1("18K-0000","Fall","CS",2023,course);
	Student s2("18K-0001","Spring","EE",2023,course);
	Student s3("18K-0002","Fall","SE",2024,course);
	
	SafeArray stu(3);
	stu.SetStudent(s1,0);
	stu.SetStudent(s2,1);
	stu.SetStudent(s3,2);
	
	stu.Display(0);
	stu.Display(1);
	stu[5];

	return 0;
}
