#include <iostream>
using namespace std;

class Employee{
	int age;
	int exp;
	int hou;
	
	public:
		Employee(){}
		Employee(int a, int e, int h){
			age=a;
			exp=e;
			hou=h;
		}
		void AssignValue (int a, int e, int h){
			age=a;
			exp=e;
			hou=h;
		}
		
		friend void calSal(Employee*, int);
};

void calSal(Employee *ptr, int n){
	for(int i=0; i<n; i++){
		if(ptr[i].age>50 && ptr[i].exp>10 && ptr[i].hou>240)
			cout << "Salary for Employee " << i+1 << " is : " << 500*ptr[i].hou << endl;
		else if((ptr[i].age<=50 && ptr[i].age>40) && (ptr[i].exp<=10 && ptr[i].exp>6) && (ptr[i].hou>200 && ptr[i].hou<=240))
			cout << "Salary for Employee " << i+1 << " is : " << 425*ptr[i].hou << endl;
		else if((ptr[i].age<=40 && ptr[i].age>30) && (ptr[i].exp<=6 && ptr[i].exp>3) && (ptr[i].hou>160 && ptr[i].hou<=200))
			cout << "Salary for Employee " << i+1 << " is : " << 375*ptr[i].hou << endl;
		else if((ptr[i].age<=30 && ptr[i].age>22) && (ptr[i].exp<=3 && ptr[i].exp>1) && (ptr[i].hou>120 && ptr[i].hou<=160))
			cout << "Salary for Employee " << i+1 << " is : " << 300*ptr[i].hou << endl;
		else{
			cout << "INVALID PARAMETERS!" << endl;
			exit(0);
		}
	}
}

int main (){
	int n, age, exp, hou;
	cout << "Enter number of employees : ";
	cin >> n;
	Employee * ptr= new Employee[n];
	for(int i=0; i<n; i++){
		cout << "Enter age, experience, working hours for Employee " << i+1 << " : ";
		cin >> age >> exp >> hou;
		ptr[i].AssignValue(age,exp,hou);
	}
	calSal(ptr,n);  // used a friend function because it makes more sense to pass a whole array to a function to call a function from it's first index and passing the whole array in it.
	return 0;
}
