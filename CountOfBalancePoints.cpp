#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 5, 2, 7, 19};
    int sum[5] = {0};
    int leftSum = 0;
    int rightSum = 0;
    int total;

    int lenOfArr = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < lenOfArr; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }

    total = sum[lenOfArr - 1];

    for (int i = 0; i < lenOfArr; i++)
    {
        leftSum = sum[i] - arr[i];
        rightSum = total - sum[i];

        if (leftSum == rightSum)
        {
            cout << "The balance point is at index: " << i;
        }
    }

    return 0;
}