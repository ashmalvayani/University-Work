#include <bits/stdc++.h> 
using namespace std; 
  
int main(){
	int Arr[]= {2, 3, 3, 5, 3, 4, 1, 7};
	int n=sizeof(Arr)/sizeof(Arr[0]);
	
	int max= Arr[0];
	for(int i=0; i<n; i++){
		if(Arr[i]> max){
			max = Arr[i];
		}
	}
	int temp[max]={0};
	
	for(int i=0; i<n; i++){
		temp[Arr[i]]++;
	}
	
	int index, check=temp[0];
	for(int i=0; i<max; i++){
		if(temp[i]> check){
			check=temp[i];
			index = i;
		}
	}
	cout << index << endl;
}
