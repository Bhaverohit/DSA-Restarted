#include <iostream>
using namespace std;

int findNum(int arr[], int size)
{
    int target, start = 0, end = size - 1, mid;
    cout << "Enter target : " << endl;
    cin >> target;

    while (start < end)
    {
        if (arr[start] == target)
        {
            return start;
        }

        else if (arr[end] == target)
        {
            return end;
        }

        start++;
        end--;
    }

    return -1;
}

int main()
{

    int arr[] = {1, 23, 43, 5, 1, 24, 45, 85, 12, 4, 46, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << findNum(arr, size) << endl;

    return 0;
}