#include <iostream>
#include "DSA.h"

#ifndef UDSA_H
#define UDSA_H

using namespace std;

class UDSA: public DynamicSafeArray{
	
	public:
		UDSA();
		UDSA(int);
		void Insert(int);
		bool Search(int);
	
};


#endif
