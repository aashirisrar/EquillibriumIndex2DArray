#include <iostream>
using namespace std;

int main()
{
    int arr[5][5] = {
        {1, 0, 1, -1, 2},
        {1, 5, 3, 1, 2},
        {1, 9, 3, 3, 7},
        {12, 5, 2, 7, 19},
        {10, 20, 2, 3, 5}};

    // Horizontal Sum
    int horizontalSum[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0)
            {
                int temp = horizontalSum[i][j - 1];
                horizontalSum[i][j] = horizontalSum[i][j - 1] + arr[i][j];
                horizontalSum[i][j] = horizontalSum[i][j] - temp;
            }
            else
            {
                horizontalSum[i][j] = horizontalSum[i][j - 1] + arr[i][j];
            }
        }
    }

    // Vertical Sum
    int verticalSum[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0)
            {
                int temp = verticalSum[j - 1][i];
                verticalSum[j][i] = verticalSum[j - 1][i] + arr[j][i];
                verticalSum[j][i] = verticalSum[j][i] - temp;
            }
            else
            {
                verticalSum[j][i] = verticalSum[j - 1][i] + arr[j][i];
            }
        }
    }

    // check for horizontal equillibrium
    int leftSum;
    int rightSum;

    for (int i = 0; i < 5; i++)
    {
        int total = horizontalSum[i][4];

        for (int j = 0; j < 5; j++)
        {
            leftSum = horizontalSum[i][j] - arr[i][j];
            rightSum = total - horizontalSum[i][j];

            if (leftSum == rightSum)
            {
                cout << "The horizontal equillibrium is at index: (" << i << "," << j << ")" << endl;
            }
        }
    }

    // check for vertical equillibrium
    int upperSum;
    int lowerSum;

    for (int i = 0; i < 5; i++)
    {
        int total = verticalSum[4][i];

        for (int j = 0; j < 5; j++)
        {
            upperSum = verticalSum[i][j] - arr[i][j];
            lowerSum = total - verticalSum[i][j];

            if (upperSum == lowerSum)
            {
                cout << "The vertical equillibrium is at index: (" << i << "," << j << ")" << endl;
            }
        }
    }

    // check for overall equillibrium

    return 0;
}