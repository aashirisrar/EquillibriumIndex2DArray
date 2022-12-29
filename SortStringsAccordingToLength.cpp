#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr1[50] = "Ahmed";
    char arr2[50] = "Ali";
    char arr3[50] = "Abdullah";

    char arrays[3][50];

    for (int i = 0; i < 50; i++)
    {
        arrays[0][i] = arr1[i];
        arrays[1][i] = arr2[i];
        arrays[2][i] = arr3[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (strlen(arrays[i]) > strlen(arrays[j]))
            {
                char temp[50];
                strcpy(temp, arrays[i]);
                strcpy(arrays[i], arrays[j]);
                strcpy(arrays[j], temp);
            }
        }
    }

    for (int i = 0; i < 50; i++)
    {
        arr1[i] = arrays[0][i];
        arr2[i] = arrays[1][i];
        arr3[i] = arrays[2][i];
    }

    cout << arr1 << endl;
    cout << arr2 << endl;
    cout << arr3 << endl;

    return 0;
}