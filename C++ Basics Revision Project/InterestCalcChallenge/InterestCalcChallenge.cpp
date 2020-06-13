#include <iostream>	// Input Output operations included

// Calculates interest from defined values - should result with an answer of 50...

// using int main(int argc, char** argv) is optional here as its not used...
int main()
{
	// Variables
	double interest;
	double principal{ 500 };
	double rate{ .02 };
	double time{ 5 };

	// Calculation
	interest = principal * rate * time;

	// cout - Result
	std::cout << "Interest: " << interest << std::endl;

	// not needed for main, but is needed for other methods
	return 0;
}