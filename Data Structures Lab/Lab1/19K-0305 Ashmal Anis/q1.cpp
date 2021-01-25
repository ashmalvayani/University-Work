#include <iostream>
using namespace std;

class Student{
	string name;
	string id;
	int age;
	string dob;
	
	public:
		Student(){}
        Student(string n, string i, int a, string d){
            name=n;
            id=i;
            age=a;
            dob=d;
        }
        void Assign(string n, string i, int a, string d){
            name=n;
            id=i;
            age=a;
            dob=d;
        }
        void Display(){
            cout << "Name\t: " << name << endl;
            cout << "ID\t: " << id << endl;
            cout << "Age\t: " << age << endl;
            cout << "DOB\t: " << dob << endl;
        }
        string Get_Name(){
        	return name;
		}
		friend void sort(Student*);		
};

void sort(Student *p){
	Student temp;
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(p[i].Get_Name()<p[j].Get_Name()){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	
	cout << "\nPRINTING INFORMATION AFTER SORTING IN DESCENDING ORDER!" << endl;
	for(int i=0; i<5; i++){
		cout << "\nStudent # " << i+1 << endl;
		p[i].Display();
	}
}

int main (){
	string name, id, dob;
	int age;
	
	Student* ptr= new Student[5];
	for(int i=0; i<5; i++){
		cout << "Enter Name, ID, Age, DOB: ";
		cin >> name >> id >> age >> dob;
		ptr[i].Assign(name,id,age,dob);
	}
	
	sort(ptr);  // used a friend function because it makes more sense to pass a whole array to a function to call a function from it's first index and passing the whole array in it.
	return 0;
}
