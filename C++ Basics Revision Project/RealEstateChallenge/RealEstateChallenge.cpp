/*
*  Copyright (c) Jonathan Carter
*  E: jonathan@carter.games
*  W: https://jonathan.carter.games/
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// method declaring
string getOwnersName();
int getHousePrice();
int calculatePercentage(int, double);


int main()
{
    string ownerLastName;
    int listingPrice;

    int sellersCost;
    int agentCommission;

    const double sellerCostPercent{ 6 };
    const double agentCommissionPercent{ 1.5 };

    // Gets the owners name
    ownerLastName = getOwnersName();
    listingPrice = getHousePrice();

    sellersCost = calculatePercentage(listingPrice, sellerCostPercent);
    agentCommission = calculatePercentage(listingPrice, agentCommissionPercent);

    // Final Display

    //cout << "Home Owner" << setw(20) << "Price of Home" << setw(20) << "Seller's Cost" << setw(20) << "Agent's Commission" << setw(20) << endl;
    //cout << left << ownerLastName << setw(20) << listingPrice << setw(20) << sellersCost << setw(20) << agentCommission << endl;

    // formatting is a pain, but I get how \t is used now atlease...
    cout << "\tHome Owner\tPrice of Home\tSeller's Cost\tAgent's Commision\n";
    cout << "\t" << left << setw(16) << ownerLastName << "$" << listingPrice << "\t\t$" << sellersCost << "\t\t$" << agentCommission;

    return 0;
}


/// <summary>
/// Prompts the user to enter their last name
/// </summary>
/// <returns>Whatever the user inputted</returns>
string getOwnersName()
{
    string userInput;

    cout << "Enter your surname: ";
    cin >> userInput;

    return userInput;
}


/// <summary>
/// Promps the user to enter their house listing price
/// </summary>
/// <returns>whatever the user inputted</returns>
int getHousePrice()
{
    int userInput;

    cout << "Enter the sales price of the house: (with no commas or decimal points) ";
    cin >> userInput;

    return userInput;
}


/// <summary>
/// Calculates the percentage of whatever is inputted
/// </summary>
int calculatePercentage(int priceOfHome, double percentage)
{
    // /100 to get percent, could be avoided if I used .06 & .015 instead of 6 & 1.5
    //cout << "Values inserted: " << priceOfHome << "\t" << percentage << endl;
    return (priceOfHome * percentage) / 100;
}