#include <iostream>

using namespace std;

// global variables
int globalInt = 10;

// Declaring method or function after main needs a reference to be used.
void function2();

// method has to be infront to work without and identifier 
void function()
{
    int localInt = 20;
    localInt += globalInt;
    cout << "Method / Function Output: " << localInt << endl;
}

int main()
{
    int localInt = 30;
    localInt += globalInt;
    cout << "Main: " << localInt << endl;

    function();
    function2();

    return 0;
}

// function after main has to be decleare dbeforehand to operatate .... its kinda annoying tbh....
void function2()
{
    int localInt = 55;
    localInt += globalInt;
    cout << "Method / Function 2 Output: " << localInt << endl;
}