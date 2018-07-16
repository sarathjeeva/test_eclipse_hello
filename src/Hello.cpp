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

Maths math;
int main() {
	cout << "!!!Hello World!!!\n"; // prints !!!Hello World!!!
	cout << "Sum of 5 + 5 is  "<< math.Addition(5,5) << endl;

	// I am adding new print

	cout << "I am working with git one years back "  << endl;;

	// Second print message from another user

	cout << "I am also working with same file" << endl;;

	cout << "I am going to commit again " << endl;

	cout << "This print message added from first user";

	return 0;
}
