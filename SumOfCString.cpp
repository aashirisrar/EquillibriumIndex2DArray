#include <iostream>
using namespace std;

int main()
{
    char s[50];
    int sum = 0;

    cout << "Enter the numbers:";
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        sum = sum + s[i] - 48;
    }

    cout << "The sum is:" << sum;

    return 0;
}