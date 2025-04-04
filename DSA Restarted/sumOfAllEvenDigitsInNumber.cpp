#include <iostream>
using namespace std;

int main()
{

    int number, sum = 0, digit, originalNum;
    cout << "Enter a number : ";
    cin >> number;

    originalNum = number;

    while (number > 0)
    {
        digit = number % 10;

        if (digit % 2 == 0)
        {
            sum = sum + digit;
        }
        number = number / 10;
    }

    cout << "The sum of " << originalNum << " is " << sum;

    return 0;
}