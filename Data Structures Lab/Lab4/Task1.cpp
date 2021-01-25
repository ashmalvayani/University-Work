#include <iostream>
using namespace std;

int Sum_Num(int *arr, int size){
    static int i=0;
    static int sum=0;
    if(i==size){
        return sum;
    }
    else{
        if(arr[i]%2==0){
            sum+= arr[i];
        }
        i++;
        Sum_Num(arr, size);
    }
}

int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout << "Enter element # " << i << ": ";
        cin >> arr[i];
    }
    cout << "\nSum of even numbers from array : " << Sum_Num(arr,size);
    return 0;
}
