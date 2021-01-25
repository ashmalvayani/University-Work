#include <iostream>
#include <fstream>
using namespace std;

class Boggle{
	int n,m, num;
	char ** Array, ** tempArr;
	string *words;
	public:
		void input(char ** array, int n, int m, int num, string word[]){
			this->n = n;
			this->m = m;
			Array = array;
			this->num= num;
			this->words=word;
		}
		void Output(){
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					cout << tempArr[i][j] << " ";
				}
				cout << endl;
			}
			
			for(int i=0; i<num; i++){
				cout << words[i] << " ";
			}
			cout << endl;
				
		}
		
		void Output2(){
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					cout << Array[i][j] << " ";
				}
				cout << endl;
			}
			
			for(int i=0; i<num; i++){
				cout << words[i] << " ";
			}
			cout << endl;
				
		}
		
		void CallBoggleBoggle(){
			for(int i=0; i<num; i++){
				tempArr= Array;
				Output();
				Output2();
				SetToNumbers(words[i]);
//				int count1= checkrow(words[i]);
//				int count2= checkcolumn(words[i]);
//				int count3= checkDiagnol(words[i]);
//				cout << count1 << " " << count2 << " " << count3 << endl;
//				cout << count1 + count2 + count3 << " ";
			}
		}
		
		void SetToNumbers(string check){
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					for(int k=0; k<check.length(); k++){
						if(tempArr[i][j]==check[k]){
							tempArr[i][j]='1';
						}
					}
				}
			}
		
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(tempArr[i][j]!='1'){
						tempArr[i][j]='0';
					}
				}
			}
			Output();
		}
		
		int checkrow(string word){
			int mainCount=0, count=0, k=0;
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(tempArr[i][j]=='1' && (tempArr[i][j+1]!='0' && i<n && j<m)){
						count++;	
					if(count==word.length())
						mainCount++;
					}
				}
				count=0;
			}
			return mainCount;
		}
		
		int checkcolumn(string word){
			int mainCount=0, count=0;
			for(int j=0; j<m; j++){
				for(int i=0; i<n; i++){
					if((tempArr[i][j]=='1') && (count<word.length())){
						count++;
					}
				}
				if(count==word.length()){
					mainCount++;
				}
				count=0;
			}
			return mainCount;
		}
		
		int checkDiagnol(string word){
			int mainCount=0, count=0;
			int t1,t2;
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(tempArr[i][j]=='1'){
						t1=i; t2=j;
						while((t1<n) && (t2<m) && (tempArr[t1][t2]=='1')){
							count++; 
							t1++;
							t2++;
						}
						if(count==word.length())
							mainCount++;
					}
					count=0;
				}
			}
			return mainCount;
		}
};

int main(){
	int n,m;
	// filing, input stream
	ifstream ptr("P1.txt");
	if(!ptr){
		cout << "File not found, first create a file with name P1.txt";
		exit(0);
	}
	// if file is opened then move further otherwise stop
	ptr >> n >> m;
	n++; m++;
	
	char **array;
	array= new char *[n];
	for(int i=0; i<n; i++)
		array[i]= new char[m];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			ptr >> array[i][j];
		}
	}
	
	int num;
	ptr >> num;
	string words[num];
	for(int i=0; i<num; i++){
		ptr >> words[i];
	}
	
	ptr.close();
	Boggle B1;
	B1.input(array, n,m, num, words);
//	B1.Output();
	B1.CallBoggleBoggle();
//	B1.Output();
	return 0;
}
/*
9 9
N K D A E F S E M M 
H W B H G G B L N Q 
N A T S I K A P A N 
L G Q U M V F A T L 
D E G U M T R K I R 
G V A N R Q B I O C 
Y D N Y J M O S N R 
U A O I T A N T T X 
N I Y L U H T A Y X 
L N J X C F B N U T 

9 9 
F U N N Y I R I M U 
K A R A C H D Y E Y 
E R P R G C D R Q L 
K Q B G C A G H A O 
I D Q J C R B Q Y G 
D J S W K A M D O I 
P F K A R A C H I C 
D C D J F L Y Y S O 
F U N G Q R U P O G 
K U C I Q R L U R E 

9 9
M Y Q R L E E J A X 
M O R A N G S X O N 
B L A C K C A D N O 
T C I G R E E N F Q 
B L U E Q S M F D A 
O F M E M R Y G Y M 
B U R E G D D S W G 
O O B Y C E G I S G 
B R O N Z E A P U M 
A Z U R E Q R W K F
*/ 
