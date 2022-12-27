#include <iostream>
#include <cstring>
using namespace std;

void Encrypt(char MessageBlock[], char Encrypted_Message[]);
void Decrypt(char Encrypted_Message[], char Message[]);

int main()
{
    char MessageBlock[26];
    char Encrypted_Message[26];
    char Message[26];

    cout << "Enter the message:";
    cin.getline(MessageBlock, 26);

    // Encryption
    Encrypt(MessageBlock, Encrypted_Message);

    cout << "Encrypted Message:" << Encrypted_Message;

    cout << endl;

    // Decryption
    Decrypt(Encrypted_Message, Message);

    cout << "Decrypted Message:" << Message;

    return 0;
}

void Encrypt(char MessageBlock[], char Encrypted_Message[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    char EncryptBlock[5][5];
    int lenOfMessage = strlen(MessageBlock);

    if (lenOfMessage > 0 && lenOfMessage <= 26)
    {
        for (i = 0; MessageBlock[k] != '\0'; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (MessageBlock[k] == ' ')
                {
                    EncryptBlock[i][j] = '.';
                    k++;
                }
                else
                {
                    EncryptBlock[i][j] = MessageBlock[k++];
                }
            }
        }

        i = lenOfMessage / 5;
        j = lenOfMessage % 5 + 5;

        for (; i < 5; i++)
        {
            for (j = j - 5; j < 5; j++)
            {
                EncryptBlock[i][j] = '$';
            }
        }

        int l = 0;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                Encrypted_Message[l++] = EncryptBlock[j][i];
            }
        }

        Encrypted_Message[l] = '\0';
    }
    else
    {
        cout << "Error! Length out of range!";
    }
}

void Decrypt(char Encrypted_Message[], char Message[])
{
    char TemporaryMessage[5][5];
    int m = 0;
    int countOfIgnoredSigns = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (Encrypted_Message[m] == '.')
            {
                TemporaryMessage[j][i] = ' ';
                m++;
            }
            else if (Encrypted_Message[m] == '$')
            {
                m++;
                countOfIgnoredSigns++;
            }
            else
            {
                TemporaryMessage[j][i] = Encrypted_Message[m++];
            }
        }
    }

    int n = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Message[n++] = TemporaryMessage[i][j];
        }
    }

    Message[n - countOfIgnoredSigns] = '\0';
}