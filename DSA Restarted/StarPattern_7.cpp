/*

* * * *
  * * *
    * *
      *

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
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }

        for (int k = 0; k < size - i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}