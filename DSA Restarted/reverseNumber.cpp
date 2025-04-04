#include <iostream>
using namespace std;

int main()
{

    int number, digit, reverse = 0, original, counter = 0;

    cout << "Enter a number : ";
    cin >> number;

    original = number;

    while (number > 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    cout << original << " <-> " << reverse;

    return 0;
}