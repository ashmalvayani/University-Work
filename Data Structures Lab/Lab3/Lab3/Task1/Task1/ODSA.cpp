#include "ODSA.h"

bool ODSA:: Search(int value){
	for(int i=0; i< size; i++){
		if(Data[i]==value){
			cout << "At index " << i;
			return true;
		}
			
		if(Data[i]>value)
			return false;			
	}
}

ODSA:: ODSA(){}

ODSA:: ODSA(int size): DynamicSafeArray(size){}

void ODSA:: Insert(int value){
	int k=0;
	
	ReSize(size+1);
	
	for(int i=0; i<size; i++){
		if(Data[i]>value){
			for(int j=size; j>i; j--){
				Data[j]=Data[j-1];
			}
			Data[i]=value;
			k=1;
		}
		if(k==1)
			break;
	}
	
	cout << "\nArray after inserting " << value << endl;
	for(int i=0; i<size; i++){
		cout << Data[i] << " ";
	}
}
