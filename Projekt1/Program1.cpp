#include <iostream>
#include <ncurses.h>
#include <cfloat>
#include <cstdio>
#include "MyMath.h"
using namespace std;

/*
Napisz program w jêzyku „C/C++”, umo¿liwiający „doœwiadczalne” wyznaczenie liczby bitów
mantysy oraz tzw. epsylona maszynowego, dla zmiennych typu float i double, tj. najmniejszej liczby
e takiej, źe fl(e + 1) > 1. Jaki jest związek e z precyzji arytmetyki?
*/

int main(int argc, char **argv)
{

	MyMath<double> *mDouble = new MyMath<double>();
	mDouble->machineEpsilon(0.5);

	MyMath<float> *mFloat = new MyMath<float>();
	mFloat->machineEpsilon(0.5);

	MyMath<int>::getDoubleInfo();
	MyMath<int>::getFloatInfo();

	cout << "Nacisnij dowolny klawisz...";
	getch();

	delete mDouble;
	delete mFloat;
	return EXIT_SUCCESS;
} // end main