#include <iostream>

using namespace std;


int main()
{
    int choice;

    cout << "\t\t1. Cake\t\t\t\t$1.25\n";
    cout << "\t\t2. Fish\t\t\t\t$1.50\n";
    cout << "\t\t3. FishCake\t\t\t$3.00\n";
    cout << "\t\t4. Cake with Fish\t\t$3.00\n";
    cout << "\t\t5. Cake with Fish and Cake\t$100\n";

    cout << "\tChoose one: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You chose Cake!";
        break;
    case 2:        
        cout << "You chose Fish!";
        break;
    case 3:
        cout << "You chose FishCake!";
        break;
    case 4:
        cout << "You chose Cake with Fish!";
        break;
    case 5:
        cout << "You chose Cake with Fish and Cake!";
        break;
    default:
        cout << "Choice is not on the menu";
        break;
    }

    return 0;
}