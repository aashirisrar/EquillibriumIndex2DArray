#include <iostream>
using namespace std;

int sizeOfArr;

void InputElements(int s[]);
void LargestContigousSubArray(int s[]);

int main()
{
    int arr[100];

    cout << "Type the length of the array:";
    cin >> sizeOfArr;

    // Input Elements
    InputElements(arr);

    // Finding largest contigous sub array
    LargestContigousSubArray(arr);

    return 0;
}

void InputElements(int s[])
{
    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < sizeOfArr; i++)
    {
        cin >> s[i];
    }
}

void LargestContigousSubArray(int s[])
{
    int curSum = 0;
    int maxSum = 0;

    for (int i = 0; i < sizeOfArr; i++)
    {
        curSum = s[i] + curSum;
        if (curSum > maxSum)
        {
            maxSum = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
        }
    }

    cout << "\nThe sum of the largest contigous subarray is:" << maxSum;
}