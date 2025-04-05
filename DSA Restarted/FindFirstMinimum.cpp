#include <iostream>
using namespace std;

int Minimun(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{

    int arr[] = {151, 10, 251, 541, 53, 40, 51, 54, 45, 1250, 41};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << Minimun(arr, size);

    return 0;
}