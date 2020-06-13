/*
*  Copyright (c) Jonathan Carter
*  E: jonathan@carter.games
*  W: https://jonathan.carter.games/
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string s1, s2, s3;

    cout << "Enter word 1: ";
    cin >> s1;
    cout << "Enter word 2: ";
    cin >> s2;
    cout << "Enter word 3: ";
    cin >> s3;

    // tutorial did not account for extra use cases, using cake fish bob the statements would not work...

    // means s1 comes before s2 in the alphabet
    if ((s1.compare(s2) < 0) && (s1.compare(s3) < 0))
    {
        // means s2 comes before s3 in the alphabet
        if (s2.compare(s3) < 0)
        {
            cout << s1 << ", " << s2 << ", " << s3 << endl;
        }
        else
        {
            cout << s1 << ", " << s3 << ", " << s2 << endl;
        }
    }
    else if (s2.compare(s3) < 0)
    {
        if (s1.compare(s3) < 0)
        {
            cout << s2 << ", " << s1 << ", " << s3 << endl;
        }
        else
        {
            cout << s2 << ", " << s3 << ", " << s1 << endl;
        }
    }
    else
    {
        if (s1.compare(s2) < 0)
        {
            cout << s3 << ", " << s1 << ", " << s2 << endl;
        }
        else
        {
            cout << s3 << ", " << s2 << ", " << s1 << endl;
        }
    }

    return 0;
}