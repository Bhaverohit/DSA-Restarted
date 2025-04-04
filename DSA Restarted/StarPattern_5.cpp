/*

      *
     * *
    * * *
   * * * *
  * * * * *

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
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}