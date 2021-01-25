#include <iostream>
#include <cstring>
using namespace std;

void reverse(int *arr, int size){
	static int i=0;
	int mid= size/2;
	if(i<mid){
		int temp = arr[i];
		arr[i]= arr[size-1-i];
		arr[size-1-i]= temp;
		i++;
		reverse(arr,size);
	}
	else{
		return;	
	}
}

int main(){
	int size=7;
	int *Array = new int[size]{1,2,3,4,5,6,7};
	
	reverse(Array,size);
	for(int i=0; i<size; i++){
		cout << Array[i] << " ";
	}
}
