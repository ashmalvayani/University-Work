#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
using namespace std;

#ifndef DYANMICSAFEARRAY_H
#define DYANMICSAFEARRAY_H

class DynamicSafeArray{
	protected:
		int* Data;
		int size;
	public:
		DynamicSafeArray();
		DynamicSafeArray(int);
		DynamicSafeArray(const DynamicSafeArray& ob);
		~DynamicSafeArray();
		int getSize() const;
		void ReSize(int);
		DynamicSafeArray& operator=(DynamicSafeArray& ob);
		int& operator[](int);
		virtual bool Search(int)=0;
		virtual void Insert(int)=0;
		
		friend ostream& operator << (ostream& outfile, DynamicSafeArray & ob);
		friend istream& operator >> (istream& infile, DynamicSafeArray & ob);
		
};

#endif
