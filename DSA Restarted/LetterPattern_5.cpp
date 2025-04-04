/*

A A A A
B B B B
C C C C
D D D D

*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter pattern size : ";
    cin >> size;
    char ch = 'A';

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    return 0;
}