#include <iostream>
using namespace std;

int main()
{

    int year;
    cout << "Enter Year : ";
    cin >> year;

    if (year % 4 == 0 || year % 400 == 0)
    {
        cout << year << " Leap Year";
    }
    else
    {
        cout << "Not Leap Year";
    }

    return 0;
}