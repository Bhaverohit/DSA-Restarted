#include <iostream>
using namespace std;

int SecondMinimum(int arr[], int size)
{
    int min = INT_MAX;
    int secMin = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            secMin = min;
            min = arr[i];
        }

        else if (secMin > arr[i] && min != arr[i])
        {
            secMin = arr[i];
        }
    }
    return secMin;
}

int main()
{

    int arr[] = {1, 1, 3, 4, 5, 6, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << SecondMinimum(arr, size);

    return 0;
}