#include <iostream>
using namespace std;

int binarySearch(int arr[], int size)
{
    int target, start = 0, end = size - 1, mid;
    cout << "Enter target : ";
    cin >> target;

    while (start < end)
    {
        mid = (start + end) / 2;

        if (target == arr[mid])
        {
            return mid;
        }

        else if (target < arr[mid])
        {
            end = mid;
            start++;
        }

        else if (target > arr[mid])
        {
            start = mid;
            end--;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << binarySearch(arr, size);

    return 0;
}