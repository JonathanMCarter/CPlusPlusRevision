#include <iostream>
#include <cmath>        // using maths library

using namespace std;


int main()
{
    float x{ .7 };

    // needs F to designate it as a float (its the easy fix for this really......)
    // the harder fix is what this does, using abs (abosute, to all for minor variations)
    if (abs(x-.7) < .001)
    {
        cout << "They are the same";
    }
    else
    {
        cout << "They are different" << endl;
        cout << x;
    }

    return 0;
}