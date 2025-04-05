#include <iostream>
using namespace std;

int SecondLargest(int arr[], int size)
{
    int max = INT_MIN;
    int secMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            secMax = max;
            max = arr[i];
        }

        else if (secMax < arr[i] && max != arr[i])
        {
            secMax = arr[i];
        }
    }
    return secMax;
}

int main()
{

    int arr[] = {151, 10, 251, 541, 53, 40, 51, 1250, 54, 45, 1250, 41};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << SecondLargest(arr, size);

    return 0;
}