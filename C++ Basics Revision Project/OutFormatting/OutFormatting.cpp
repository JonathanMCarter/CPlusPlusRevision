#include <iostream>
#include <iomanip>      // used for formatting!!!! - new 

using namespace std;


int main()
{
    // Example to edit
    cout << "Old" << endl;
    cout << "AL" << "Alabama" << 4.00 << "%" << endl;
    cout << "AZ" << "Arizona" << 5.60 << "%" << endl;
    cout << "AR" << "Arkansas" << 6.50 << "%" << endl;
    cout << "CA" << "California" << 6.00 << "%" << endl;
    cout << "CO" << "Colorado" << 2.90 << "%" << endl;
    cout << endl;

    // setw(###)            sets the width to a number of characters
    // \t                   adds a gap before the string value
    // fixed                ensures the decimal points keeps in place, otherwise it starts from the int value      
    // setpercision(###)    sets the number of points of persision

    // left, fixed and persision only need defining once, the rest follow it
    cout << "Formatted" << endl;
    cout << "AL" << setw(15) << left <<"\tAlabama" << fixed << setprecision(2) << 4.00 << "%" << endl;
    cout << "AZ" << setw(15) << "\tArizona" << 5.60 << "%" << endl;
    cout << "AR" << setw(15) << "\tArkansas" << 6.50 << "%" << endl;
    cout << "CA" << setw(15) << "\tCalifornia" << 6.00 << "%" << endl;
    cout << "CO" << setw(15) << "\tColorado" << 2.90 << "%" << endl;

    return 0;
}