//============================================================================
// Name        : Hello.cpp
// Author      : Sarath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Maths.h"
using namespace std;

Maths maths;
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;

	maths = new Maths();

	int sum = maths.Addition(5,5);

}
