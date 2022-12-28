#include <iostream>
#include <cstring>
using namespace std;

void Sort2DArrayAlphabetically(char leftRotatedCombinations[][10], int lenOfArr)
{
    char temp[100];

    for (int i = 0; i < lenOfArr; i++)
    {
        for (int j = i + 1; j < lenOfArr - 1; j++)
        {
            if (strcmp(leftRotatedCombinations[i], leftRotatedCombinations[j]) > 0)
            {
                strcpy(temp, leftRotatedCombinations[j]);
                strcpy(leftRotatedCombinations[j], leftRotatedCombinations[i]);
                strcpy(leftRotatedCombinations[i], temp);
            }
        }
    }
}

void LeftRotateArray(char arr[], char leftRotatedCombinations[][10], int lenOfArr)
{
    cout << "The following are all of the combinations by the left rotation:" << endl;
    for (int m = 0; m < lenOfArr; m++)
    {
        // Left Rotation
        char temp = arr[0];
        int i;
        for (i = 1; i < lenOfArr; i++)
        {
            char temporary = arr[i + 1];
            arr[i - 1] = arr[i];
            arr[i] = temporary;
        }

        arr[i - 1] = temp;

        for (int k = 0; k < lenOfArr; k++)
        {
            leftRotatedCombinations[m][k] = arr[k];
        }

        for (int a = 0; a < lenOfArr; a++)
        {
            cout << leftRotatedCombinations[m][a];
        }
        cout << endl;
    }
}

int main()
{
    char arr[10];
    char leftRotatedCombinations[10][10];

    cout << "Enter a string:";
    cin >> arr;

    int lenOfArr = strlen(arr);

    LeftRotateArray(arr, leftRotatedCombinations, lenOfArr);

    Sort2DArrayAlphabetically(leftRotatedCombinations, lenOfArr);

    cout << "The output is:" << endl;
    cout << leftRotatedCombinations[0];

    return 0;
}