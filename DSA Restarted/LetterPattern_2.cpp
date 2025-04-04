/*

A
A B
A B C
A B C D

*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter pattern size : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)(j + 'A');
        }
        cout << endl;
    }

    return 0;
}