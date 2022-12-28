#include <iostream>
using namespace std;

void KthSmallestElement(int arr[]);

int main()
{
    int arr[10] = {-1};

    KthSmallestElement(arr);

    return 0;
}

void KthSmallestElement(int arr[])
{
    cout << "Enter max 10 values or -1 to stop:";

    int i;
    for (i = 0; arr[i - 1] != -1 && i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Your valid enteries are:" << --i;

    // Sorting
    int numOfElements = i;
    for (int j = 0; j < numOfElements; j++)
    {
        for (int k = j + 1; k < numOfElements; k++)
        {
            if (arr[j] > arr[k])
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }

    // Printing Sorted Array
    cout << "\nThe Sorted Array is:";
    for (int j = 0; j < i; j++)
    {
        if (j != i - 1)
        {
            cout << arr[j] << ",";
        }
        else
        {
            cout << arr[j];
        }
    }

    // Finding the smallest element of the new array
    int k;
    cout << "\nNow enter the value for k (the value to give the smallest number in sorted array till that point):";
    cin >> k;

    cout << "The Kth smallest value is:" << arr[k - 1];
}