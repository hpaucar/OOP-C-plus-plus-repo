//============================================================================
// Name        : Constructors.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "Starting program ..." << endl;

	{
		Cat bob;
		bob.speak();
	}

	cout << "Ending program ..." << endl;
	return 0;
}

