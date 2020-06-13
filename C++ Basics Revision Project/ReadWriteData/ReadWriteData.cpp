/*
*  Copyright (c) Jonathan Carter
*  E: jonathan@carter.games
*  W: https://jonathan.carter.games/
*/

#include <iostream>
#include <string>

using namespace std;

// declaring methods cause I use methods a lot when programming to neaten code
string userName();
int userYear();


int main()
{
    string name;
    int year;

    name = userName();
    year = userYear();

    cout << "You are: " << name << " and you were born in " << year << " you are " << 2020-year << " years old this year." << endl;

    return 0;
}


string userName()
{
    string userInput;

    cout << "Enter your name: ";
    //cin >> userInput; //only gets until the first white space
    //cin.ignore(); // will allow a second input into the console, ignoring the user input of a endl when they pressed return
    getline(cin, userInput); //gets the line until it hits a endl

    return userInput;
}

int userYear()
{
    int userInput;

    cout << "Enter your birth year: ";
    cin >> userInput;

    return userInput;
}