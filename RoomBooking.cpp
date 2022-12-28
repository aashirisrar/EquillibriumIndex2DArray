#include <iostream>
using namespace std;

int main()
{
     char type;
     char arr[9][7] = {
         "******",
         "******",
         "******",
         "******",
         "******",
         "******",
         "******",
         "******"};

     cout << "Enter the class(First or Economy) - Floor 1 and 2 are reserved for First Class, Type E for economy and F for first:";
     cin >> type;

     if (type == 'F' || type == 'f')
     {
          int floorNum = 0;
          int roomNum = 0;

          while (floorNum != -1 && roomNum != -1)
          {
               cout << "Enter the floor number to reserve (1 to 3): ";
               cin >> floorNum;

               cout << "Enter the room number to reserve (1 to 6): ";
               cin >> roomNum;

               if (floorNum != -1 && roomNum != -1)
               {
                    if (floorNum >= 1 && floorNum <= 3 && roomNum >= 1 && roomNum <= 6)
                    {
                         if (arr[floorNum - 1][roomNum - 1] == '*')
                         {
                              arr[floorNum - 1][roomNum - 1] = 'X';

                              cout
                                  << " ------------------------------------------------------------" << endl;
                              cout << "|  Floor1   |"
                                   << "   " << arr[0][0] << "   |"
                                   << "   " << arr[0][1] << "   |"
                                   << "   " << arr[0][2] << "   |"
                                   << "   " << arr[0][3] << "   |"
                                   << "   " << arr[0][4] << "   |"
                                   << "   " << arr[0][5] << "   |" << endl;
                              cout << " ------------------------------------------------------------" << endl;
                              cout << "|  Floor2   |"
                                   << "   " << arr[1][0] << "   |"
                                   << "   " << arr[1][1] << "   |"
                                   << "   " << arr[1][2] << "   |"
                                   << "   " << arr[1][3] << "   |"
                                   << "   " << arr[1][4] << "   |"
                                   << "   " << arr[1][5] << "   |" << endl;
                              cout << " ------------------------------------------------------------" << endl;
                              cout << "|  Floor3   |"
                                   << "   " << arr[2][0] << "   |"
                                   << "   " << arr[2][1] << "   |"
                                   << "   " << arr[2][2] << "   |"
                                   << "   " << arr[2][3] << "   |"
                                   << "   " << arr[2][4] << "   |"
                                   << "   " << arr[2][5] << "   |" << endl;
                              cout << " ------------------------------------------------------------" << endl;
                              cout << "|  Floor4   |"
                                   << "   " << arr[3][0] << "   |"
                                   << "   " << arr[3][1] << "   |"
                                   << "   " << arr[3][2] << "   |"
                                   << "   " << arr[3][3] << "   |"
                                   << "   " << arr[3][4] << "   |"
                                   << "   " << arr[3][5] << "   |" << endl;
                              cout << " ------------------------------------------------------------" << endl;
                              cout << "|  Floor5   |"
                                   << "   " << arr[4][0] << "   |"
                                   << "   " << arr[4][1] << "   |"
                                   << "   " << arr[4][2] << "   |"
                                   << "   " << arr[4][3] << "   |"
                                   << "   " << arr[4][4] << "   |"
                                   << "   " << arr[4][5] << "   |" << endl;
                              cout << " ------------------------------------------------------------" << endl;
                              cout << "|  Floor6   |"
                                   << "   " << arr[5][0] << "   |"
                                   << "   " << arr[5][1] << "   |"
                                   << "   " << arr[5][2] << "   |"
                                   << "   " << arr[5][3] << "   |"
                                   << "   " << arr[5][4] << "   |"
                                   << "   " << arr[5][5] << "   |" << endl;
                              cout << " ------------------------------------------------------------" << endl;
                              cout << "|  Floor7   |"
                                   << "   " << arr[6][0] << "   |"
                                   << "   " << arr[6][1] << "   |"
                                   << "   " << arr[6][2] << "   |"
                                   << "   " << arr[6][3] << "   |"
                                   << "   " << arr[6][4] << "   |"
                                   << "   " << arr[6][5] << "   |" << endl;
                              cout << " ------------------------------------------------------------" << endl;
                              cout << "|  Floor8   |"
                                   << "   " << arr[7][0] << "   |"
                                   << "   " << arr[7][1] << "   |"
                                   << "   " << arr[7][2] << "   |"
                                   << "   " << arr[7][3] << "   |"
                                   << "   " << arr[7][4] << "   |"
                                   << "   " << arr[7][5] << "   |" << endl;
                              cout << " ------------------------------------------------------------" << endl;
                         }
                         else
                         {
                              cout << "The room is already booked!" << endl;
                         }
                    }
                    else
                    {
                         cout << "--------------------------------------\n";
                         cout << "Enter the floor number between 1 to 2 (for first class) and room between 1 to 6" << endl;
                    }
               }
          }
     }
     else if (type == 'E' || type == 'e')
     {
          char smokingZone;

          cout << "Do you want the room in smoking zone - Floor 6 to 8 are smoking zones  (y/n):";
          cin >> smokingZone;

          if (smokingZone == 'Y' || smokingZone == 'y')
          {
               int floorNum = 0;
               int roomNum = 0;

               while (floorNum != -1 && roomNum != -1)
               {
                    cout << "Enter the floor number to reserve(6 to 8): ";
                    cin >> floorNum;

                    cout << "Enter the room number to reserve(1 to 6): ";
                    cin >> roomNum;

                    if (floorNum != -1 && roomNum != -1)
                    {
                         if (floorNum >= 6 && floorNum <= 8 && roomNum >= 1 && roomNum <= 6)
                         {
                              if (arr[floorNum - 1][roomNum - 1] == '*')
                              {
                                   arr[floorNum - 1][roomNum - 1] = 'X';

                                   cout
                                       << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor1   |"
                                        << "   " << arr[0][0] << "   |"
                                        << "   " << arr[0][1] << "   |"
                                        << "   " << arr[0][2] << "   |"
                                        << "   " << arr[0][3] << "   |"
                                        << "   " << arr[0][4] << "   |"
                                        << "   " << arr[0][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor2   |"
                                        << "   " << arr[1][0] << "   |"
                                        << "   " << arr[1][1] << "   |"
                                        << "   " << arr[1][2] << "   |"
                                        << "   " << arr[1][3] << "   |"
                                        << "   " << arr[1][4] << "   |"
                                        << "   " << arr[1][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor3   |"
                                        << "   " << arr[2][0] << "   |"
                                        << "   " << arr[2][1] << "   |"
                                        << "   " << arr[2][2] << "   |"
                                        << "   " << arr[2][3] << "   |"
                                        << "   " << arr[2][4] << "   |"
                                        << "   " << arr[2][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor4   |"
                                        << "   " << arr[3][0] << "   |"
                                        << "   " << arr[3][1] << "   |"
                                        << "   " << arr[3][2] << "   |"
                                        << "   " << arr[3][3] << "   |"
                                        << "   " << arr[3][4] << "   |"
                                        << "   " << arr[3][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor5   |"
                                        << "   " << arr[4][0] << "   |"
                                        << "   " << arr[4][1] << "   |"
                                        << "   " << arr[4][2] << "   |"
                                        << "   " << arr[4][3] << "   |"
                                        << "   " << arr[4][4] << "   |"
                                        << "   " << arr[4][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor6   |"
                                        << "   " << arr[5][0] << "   |"
                                        << "   " << arr[5][1] << "   |"
                                        << "   " << arr[5][2] << "   |"
                                        << "   " << arr[5][3] << "   |"
                                        << "   " << arr[5][4] << "   |"
                                        << "   " << arr[5][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor7   |"
                                        << "   " << arr[6][0] << "   |"
                                        << "   " << arr[6][1] << "   |"
                                        << "   " << arr[6][2] << "   |"
                                        << "   " << arr[6][3] << "   |"
                                        << "   " << arr[6][4] << "   |"
                                        << "   " << arr[6][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor8   |"
                                        << "   " << arr[7][0] << "   |"
                                        << "   " << arr[7][1] << "   |"
                                        << "   " << arr[7][2] << "   |"
                                        << "   " << arr[7][3] << "   |"
                                        << "   " << arr[7][4] << "   |"
                                        << "   " << arr[7][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                              }
                              else
                              {
                                   cout << "The room is already booked!" << endl;
                              }
                         }
                         else
                         {
                              cout << "--------------------------------------\n";
                              cout << "Enter the floor number between 6 to 8 (for non smoking) and room between 1 to 6" << endl;
                         }
                    }
               }
          }
          else if (smokingZone == 'N' || smokingZone == 'n')
          {
               int floorNum = 0;
               int roomNum = 0;

               while (floorNum != -1 && roomNum != -1)
               {
                    cout << "Enter the floor number to reserve (3 to 5): ";
                    cin >> floorNum;

                    cout << "Enter the room number to reserve (1 to 6): ";
                    cin >> roomNum;

                    if (floorNum != -1 && roomNum != -1)
                    {
                         if (floorNum >= 3 && floorNum <= 5 && roomNum >= 1 && roomNum <= 6)
                         {

                              if (arr[floorNum - 1][roomNum - 1] == '*')
                              {
                                   arr[floorNum - 1][roomNum - 1] = 'X';

                                   cout
                                       << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor1   |"
                                        << "   " << arr[0][0] << "   |"
                                        << "   " << arr[0][1] << "   |"
                                        << "   " << arr[0][2] << "   |"
                                        << "   " << arr[0][3] << "   |"
                                        << "   " << arr[0][4] << "   |"
                                        << "   " << arr[0][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor2   |"
                                        << "   " << arr[1][0] << "   |"
                                        << "   " << arr[1][1] << "   |"
                                        << "   " << arr[1][2] << "   |"
                                        << "   " << arr[1][3] << "   |"
                                        << "   " << arr[1][4] << "   |"
                                        << "   " << arr[1][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor3   |"
                                        << "   " << arr[2][0] << "   |"
                                        << "   " << arr[2][1] << "   |"
                                        << "   " << arr[2][2] << "   |"
                                        << "   " << arr[2][3] << "   |"
                                        << "   " << arr[2][4] << "   |"
                                        << "   " << arr[2][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor4   |"
                                        << "   " << arr[3][0] << "   |"
                                        << "   " << arr[3][1] << "   |"
                                        << "   " << arr[3][2] << "   |"
                                        << "   " << arr[3][3] << "   |"
                                        << "   " << arr[3][4] << "   |"
                                        << "   " << arr[3][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor5   |"
                                        << "   " << arr[4][0] << "   |"
                                        << "   " << arr[4][1] << "   |"
                                        << "   " << arr[4][2] << "   |"
                                        << "   " << arr[4][3] << "   |"
                                        << "   " << arr[4][4] << "   |"
                                        << "   " << arr[4][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor6   |"
                                        << "   " << arr[5][0] << "   |"
                                        << "   " << arr[5][1] << "   |"
                                        << "   " << arr[5][2] << "   |"
                                        << "   " << arr[5][3] << "   |"
                                        << "   " << arr[5][4] << "   |"
                                        << "   " << arr[5][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor7   |"
                                        << "   " << arr[6][0] << "   |"
                                        << "   " << arr[6][1] << "   |"
                                        << "   " << arr[6][2] << "   |"
                                        << "   " << arr[6][3] << "   |"
                                        << "   " << arr[6][4] << "   |"
                                        << "   " << arr[6][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                                   cout << "|  Floor8   |"
                                        << "   " << arr[7][0] << "   |"
                                        << "   " << arr[7][1] << "   |"
                                        << "   " << arr[7][2] << "   |"
                                        << "   " << arr[7][3] << "   |"
                                        << "   " << arr[7][4] << "   |"
                                        << "   " << arr[7][5] << "   |" << endl;
                                   cout << " ------------------------------------------------------------" << endl;
                              }
                              else
                              {
                                   cout << "The room is already booked!" << endl;
                              }
                         }
                         else
                         {
                              cout << "--------------------------------------\n";
                              cout << "Enter the floor number between 3 to 5 for non smoking zones and room number between 1 to 6" << endl;
                         }
                    }
               }
          }
          else
          {
               cout << "Invalid Input!";
          }
     }
     else
     {
          cout << "Error! Invalid Input!";
     }

     return 0;
}
