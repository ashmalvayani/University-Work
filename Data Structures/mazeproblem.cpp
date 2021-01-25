#include <iostream>
using namespace std;

int n,m;
bool isSafe(int **arr, int i, int j);
static int path=0;
void CountingMaze(int **arr, int sl1, int sl2){
	int el1= n-1, el2= m-1;
//	static int path = 0;
	if(sl1== el1 && sl2== el2){
		path++;
//		cout << path << endl;
		return;
	}
	else{
		if(isSafe(arr,sl1,sl2)){
			if(isSafe(arr,sl1,sl2+1)){
				CountingMaze(arr,sl1,sl2+1);
			}
			if(isSafe(arr,sl1+1,sl2)){
				CountingMaze(arr,sl1+1,sl2);
			}
		}
	}	
//	cout << path << endl;
}

bool isSafe(int **arr, int i, int j){
	if(i>=0 && i<=n && j>=0 && j<=m && arr[i][j]==0)
		return true;
	return false;
}

int main(){
	cin >> n >> m;
	int ** arr;
	
	arr = new int *[n];
	for(int i=0; i<n; i++)
		arr[i]= new int[m];
		
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}
	int sl1=0,sl2=0, el1=n-1, el2=m-1;
	
	CountingMaze(arr,sl1,sl2);
	cout << path << endl;
	return 0;
}

/*
5 6
0 0 1 0 0 0
0 0 0 0 0 0
1 1 1 1 1 0
0 0 0 0 1 0
0 0 0 0 1 0 

1 0 1 1 1 1 0 1 1 1 
1 0 1 0 1 1 1 0 1 1 
1 1 1 0 1 1 0 1 0 1 
0 0 0 0 1 0 0 0 0 1 
1 1 1 0 1 1 1 0 1 0 
1 0 1 1 1 1 0 1 0 0 
1 0 0 0 0 0 0 0 0 1 
1 0 1 1 1 1 0 1 1 1 
1 1 0 0 0 0 1 0 0 1
*/

