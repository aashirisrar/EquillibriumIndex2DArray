#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;

    char name[50];
    char salary[50];
    char dept[50];

    file.open("myfile.txt");

    while (!file.eof())
    {
        file >> name >> salary >> dept;
        cout << name << "\t" << salary << "\t" << dept << endl;
    }

    return 0;
}