#include <iostream>
using namespace std;

int findNum(int arr[], int size)
{
    int target;
    cout << "Enter target : " << endl;
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
            break;
        }
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