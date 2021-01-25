#include "UDSA.h"

UDSA:: UDSA(){}

UDSA:: UDSA(int size): DynamicSafeArray(size){}

bool UDSA:: Search(int value){
	for(int i=0; i<size; i++){
		if(Data[i]==value){
			cout << "At index " <<i;
			return true;
		}			
	}
	return false;
}

void UDSA:: Insert(int value){
	ReSize(size+1);
	Data[size-1]= value;
	
	cout << "\nArray after inserting " << value<< endl;
	for(int i=0; i<size; i++){
		cout << Data[i] << " ";
	}
}
