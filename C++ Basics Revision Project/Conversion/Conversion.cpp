/*
*  Copyright (c) Jonathan Carter
*  E: jonathan@carter.games
*  W: https://jonathan.carter.games/
*/

#include <iostream>

using namespace std;


int main()
{
	double x{ 45.765 };
	int y = static_cast<int>(x);	// casting - like using (int) in C#, but a wordier version of it.

	// incorrect types  - deliberate
	int b = true;		// returns 1 
	int c = 'a';		// returns the char int value, so a = 97

	// Added to see how other casts work
	bool d = static_cast<bool>(b);	// as a bool is 0 or 1 its still 1
	char e = static_cast<char>(c);	// coverts it to its char value from the int

	// Displays stuff...
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;

	cout << "B: " << b << endl;
	cout << "C: " << c << endl;

	cout << "D: " << d << endl;
	cout << "E: " << e << endl;

	return 0;
}
