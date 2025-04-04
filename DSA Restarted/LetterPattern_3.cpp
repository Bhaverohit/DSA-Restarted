/*

A B C D
A B C
A B
A

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
        for (int j = 0; j < size - i; j++)
        {
            cout << (char)(j + 'A') << " ";
        }
        cout << endl;
    }

    return 0;
}