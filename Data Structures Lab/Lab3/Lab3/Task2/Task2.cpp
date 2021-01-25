#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <vector<int>> vec;
	
	int r, rs, el;
	cout << "Enter number of rows : ";
	cin >> r;
	for(int i=0; i<r; i++){
		vector <int> t;
		cout << "Enter row size: ";
		cin >> rs;
		cout << "Enter row elements : ";
		for(int j=0; j<rs; j++){
			cin >> el;
			t.push_back(el);
		}
		vec.push_back(t);
	}
	
	cout << "\nDisplaying Jagged Array : \n";
	for(int i=0; i<r; i++){
		for(int j=0; j<vec[i].size(); j++){
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
		
	return 0;
}
