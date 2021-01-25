#include "DSA.h"

DynamicSafeArray:: DynamicSafeArray(){
	Data= NULL;
	size=0;
}

DynamicSafeArray:: DynamicSafeArray(int size){
	this->size= size;
	Data = new int [size];
	memset(this->Data,0,sizeof(int)*size);
	
	cout << "\nEnter an array : ";
	for(int i=0; i<size; i++){
		cin >> Data[i];
	}
}

int DynamicSafeArray::getSize()const{
	return size;
}

DynamicSafeArray:: DynamicSafeArray(const DynamicSafeArray& rhs){
	this->size=rhs.size;
	Data= new int[size];
	memcpy(this->Data,rhs.Data,(sizeof(int)*rhs.getSize()));
}

DynamicSafeArray:: ~DynamicSafeArray(){
	if(Data>0){
		delete []Data;
		Data=0;
		size=0;
	}
}
void DynamicSafeArray:: ReSize(int nSize){
	if(size!=nSize){
		int* temp= new int[size];
		for(int i=0; i<size; i++){
			temp[i]=Data[i];
		}
		delete [] Data;
		Data=0;
	
		Data= new int[nSize];
		memset(this->Data,0,sizeof(int)*nSize);
		for(int i=0; i<size; i++)
			Data[i]=temp[i];
		
		size= nSize;
		delete [] temp;
		temp=0;
	}
}

DynamicSafeArray& DynamicSafeArray:: operator=(DynamicSafeArray& ob){
	if(this!= &ob){
		this->size= ob.size;
		this->Data= new int[size];
		memcpy(this->Data, ob.Data, (sizeof(ob.Data)));
	}
	return (*this);
}

int& DynamicSafeArray::operator[](int index){
	if((index<0) || (index>size)){
		cout<< "Array out of index, exitting.";
		exit(0);
	}
	return Data[index];
}


ostream& operator << (ostream& outfile,DynamicSafeArray & ob){
	for (int i=0; i<ob.size; i++)
		outfile << ob.Data[i];
	return outfile;
}

istream& operator >> (istream& infile, DynamicSafeArray & ob){
	for (int i=0; i<ob.size; i++)
		infile>> ob.Data[i];
	return infile;
}


