#include <iostream>
#include "DSA.h"

#ifndef ODSA_H;
#define ODSA_H;

class ODSA: public DynamicSafeArray{
	public:
		ODSA();
		ODSA(int);
		bool Search(int);
		void Insert(int);
};

#endif;
