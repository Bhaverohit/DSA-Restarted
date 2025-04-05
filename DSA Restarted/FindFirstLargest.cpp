#include <iostream>
using namespace std;

int Largest(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr[] = {151, 1, 251, 541, 53, 40, 51, 54, 45, 1250, 41};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << Largest(arr, size);

    return 0;
}