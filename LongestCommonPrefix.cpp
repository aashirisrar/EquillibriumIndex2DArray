#include <iostream>
#include <cstring>
using namespace std;

const int rows = 5, cols = 30;
void LongestCommonPrefix(char arr[][cols], int rows);

int main()
{
    char arr[rows][cols] = {"geeksforgeeks", "geeks",
                            "geek", "geezer", "ge"};

    LongestCommonPrefix(arr, rows);

    return 0;
}

void LongestCommonPrefix(char arr[][cols], int rows)
{
    // Finding the smallest string
    int smallestString = strlen(arr[0]);

    for (int i = 1; i < rows; i++)
    {
        if (strlen(arr[i]) < smallestString)
        {
            smallestString = strlen(arr[i]);
        }
    }

    // Finding the largest common prefix
    char result[50];
    int i;
    for (i = 0; i < smallestString; i++)
    {
        char currentChar = arr[0][i];

        for (int j = 0; j < rows; j++)
        {
            if (arr[j][i] != currentChar)
            {
                goto m;
            }
        }

        result[i] = currentChar;
    }

m:
    result[i] = '\0';
    cout << "The longest common prefix is: " << result;
}