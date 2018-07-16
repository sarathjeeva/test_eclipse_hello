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
	cout << "!!!Hello World!!!"; // prints !!!Hello World!!!
	cout << "Sum of 5 + 5 is  "<< math.Addition(5,5) << endl;
	return 0;
}
