#include <iostream>
using namespace std;

void Selection(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int mini = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

void DisplayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 5, 1, 54, 1, 6, 41, 66, 20, 565, 164, 64, 61};
    int size = sizeof(arr) / sizeof(arr[0]);

    DisplayArray(arr, size);
    Selection(arr, size);
    DisplayArray(arr, size);

    return 0;
}