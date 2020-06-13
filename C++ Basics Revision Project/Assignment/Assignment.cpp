/*
*  Copyright (c) Jonathan Carter
*  E: jonathan@carter.games
*  W: https://jonathan.carter.games/
*/

#include <iostream>
#include <string>			// allows use of strings

using namespace std;		// save susing std:: all the time


int main()
{
	// using {} instead of = for fun
	int a{ 5 }, b{ 7 }, c{ 11 };

	// does the math
	double average = (a + b + c) / 3.0;

	cout << "Average: " << average << endl;

	// Compound Operator
	a += 3;
	cout << "A: " << a << endl;

	// Remainder or Mod
	int r;
	r = c % 2;

	cout << "Remainder: " << r << endl;

	return 0;
}