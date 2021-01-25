#include <iostream>
#include"DSA.h"
#include"DSA.cpp"
#include "ODSA.h"
#include "ODSA.cpp"
#include "UDSA.h"
#include "UDSA.cpp"


int main (){
	int val, size;
	cout << "ORDERED ARRAY!";
	cout << "\nEnter the size of array: ";
	cin >> size;
	ODSA ob(size);
	cout << "Enter the value that you want to search: ";
	cin >> val;
	bool check=ob.Search(val);
	if(check)
		cout << " Value found.\n";
	else
		cout << "Value not found.\n";
	cout << "Enter the value that you want to insert : ";
	cin >> val;
	ob.Insert(val);
	
	cout << "\n\nUNORDERED ARRAY!";	
	cout << "\nEnter the size of array: ";
	cin >> size;
	UDSA ob2(size);
	cout << "Enter the value that you want to search: ";
	cin >> val;
	check = ob2.Search(val);
	if(check)
		cout << " Value found.\n";
	else
		cout << "Value not found.\n";
	cout << "Enter the value that you want to insert : ";
	cin >> val;
	ob2.Insert(val);
	
    return 0;
}
