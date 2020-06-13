/*
*  Copyright (c) Jonathan Carter
*  E: jonathan@carter.games
*  W: https://jonathan.carter.games/
*/

#include <iostream>

using namespace std;

double calcFinalBalance(double, double, double);
bool isAccountTypeValid(int);

int main()
{
    short accountType;
    double startBal, deposits, withdrawals, finalBal;
    bool accoutTypeValid;


    cout << "Banking Challenge\n" << endl;

    cout << "\t1.\tChecking\n";
    cout << "\t2.\tSavings\n\n";

    cout << "Which account type are you trying to access?: ";
    cin >> accountType;

    accoutTypeValid = isAccountTypeValid(accountType);

    if (accoutTypeValid)
    {
        cout << "\nEnter your current balance: ";
        cin >> startBal;
        cout << "\nEnter your deposits: ";
        cin >> deposits;
        cout << "\nEnter your withdrawals: ";
        cin >> withdrawals;


        switch (accountType)
        {
            case 1:
                cout << "\n\tYour Checking Account!\n" << endl;
                cout << "\tNew Balance: \t\t" << "$" << calcFinalBalance(startBal, deposits, withdrawals) << endl;
                cout << "\tStarting Balance: \t" << "$" << startBal << endl;
                cout << "\tDeposits: \t\t" << "$" << deposits << endl;
                cout << "\tStarting Balance: \t" << "$" << withdrawals << endl;
                break;
            case 2:
                cout << "\n\tYour Savings Account!\n" << endl;
                cout << "\tNew Balance: \t\t" << "$" << calcFinalBalance(startBal, deposits, withdrawals) << endl;
                cout << "\tStarting Balance: \t" << "$" << startBal << endl;
                cout << "\tDeposits: \t\t" << "$" << deposits << endl;
                cout << "\tStarting Balance: \t" << "$" << withdrawals << endl;
                break;
            default:
                break;
        }
    }
    else
    {
        cout << "Error Code 1: The account type you entered was invalid" << endl;
    }

    return 0;
}


/// <summary>
/// Calculates the final balance for the bank account in question
/// </summary>
/// <param name="startBal">The starting balance the user has inputted</param>
/// <param name="desposits">The number of deposits made by the user</param>
/// <param name="withdrawals">The number of withdrawls by the user</param>
/// <returns>Final balance</returns>
double calcFinalBalance(double startBal, double deposits, double withdrawals)
{
    return startBal + deposits - withdrawals;
}


/// <summary>
/// Checks to see if the user input for the account type is valid
/// </summary>
/// <param name="valueToCheck">value to check</param>
/// <returns>true or false</returns>
bool isAccountTypeValid(int valueToCheck)
{
    if (valueToCheck == 1 || valueToCheck == 2)
    {
        return true;
    }
    else
    {
        return false;
    }

}