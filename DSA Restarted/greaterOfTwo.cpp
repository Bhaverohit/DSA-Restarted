#include <iostream>
using namespace std;

int main()
{
    int numOne, numTwo;

    cout << "Enter Two Numbers : ";
    cin >> numOne >> numTwo;

    if (numOne > numTwo)
    {
        cout << numOne << " is Greater";
    }
    else
    {
        cout << numTwo << " is Greater";
    }

    return 0;
}