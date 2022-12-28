#include <iostream>
#include <cstring>
using namespace std;

void RotateLeft(char str[]);
void Sort2DArrayAlphabetically(char leftRotatedCombinations[][50], int lenOfArr);

void LeftRotateArray(char arr[], char leftRotatedCombinations[][50], int lenOfArr);

int main()
{
    char arr[50];
    char leftRotatedCombinations[50][50];

    cout << "Enter a string:";
    cin >> arr;

    int lenOfArr = strlen(arr);

    for (int i = 0; i < lenOfArr; i++)
    {
        RotateLeft(arr);
        strcpy(leftRotatedCombinations[i], arr);
    }

    // This code will give all the possible left rotations and print them
    // LeftRotateArray(arr, leftRotatedCombinations, lenOfArr);

    Sort2DArrayAlphabetically(leftRotatedCombinations, lenOfArr);

    cout << "The output is:" << endl;
    cout << leftRotatedCombinations[0];

    return 0;
}

void RotateLeft(char str[])
{
    // Left Rotation
    int lenOfArr = strlen(str);
    char temp = str[0];
    int i;
    for (i = 1; i < lenOfArr; i++)
    {
        char temporary = str[i + 1];
        str[i - 1] = str[i];
        str[i] = temporary;
    }

    str[i - 1] = temp;
}

void Sort2DArrayAlphabetically(char leftRotatedCombinations[][50], int lenOfArr)
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

void LeftRotateArray(char arr[], char leftRotatedCombinations[][50], int lenOfArr)
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
