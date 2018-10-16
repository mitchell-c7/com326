/*
*Main.cpp
*Author Chloe Mitchell
*Date 16/10/2018
* Test Arrays
*/

#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int a1[8]{4, 6, 22, 54, 12, 65, 44, 73};
	/*a1[0] = 1;
	a1[1] = 2;
	a1[2] = 3;
	a1[3] = 4;
	a1[4] = 5;
	a1[5] = 6;
	a1[6] = 7;
	a1[7] = 8;*/

	int a2[5];
	int index;

	int sizeArray1 = sizeof(a1) / sizeof(a1[0]);
	int sizeArray2 = sizeof(a2) / sizeof(a2[0]);

#ifndef NDEBUG 
	assert(sizeArray1 == sizeArray2);
#endif  !NDEBUG

	for (index = 0; index < 8; index++) {
		a2[index] = a1[index];
	}

	cout << "The elements in A2 are" << endl;
	for (index = 0; index < 8; index++) {
		cout << a2[index] << endl; 
	}

	
}