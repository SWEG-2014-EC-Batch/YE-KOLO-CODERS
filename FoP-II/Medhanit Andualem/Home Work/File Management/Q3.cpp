#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream inputClientFile;
    inputClientFile.open("accountInfo.txt", ios::out);

    if (!inputClientFile)
    {
        cout << "File could not be opened";
        exit(1);
    }

    int num = 0;
    long int accountNumber;
    char firstName[10];
    char lastName[15];
    double balance;

    while (num < 5)
    {
        cout << "Enter: ACCOUNT NUMBER, FIRST NAME, LAST NAME AND BALANCE RESPECTIVELY.";
        cin >> accountNumber >> firstName >> lastName >> balance;

        inputClientFile << accountNumber << ' ' << firstName << ' ' << lastName << ' ' << balance << '\n';

        num++;
    }
    inputClientFile.close();

    ifstream outputClientFile;
    outputClientFile.open("accountInfo.txt", ios::in);

    if (!outputClientFile)
    {
        cout << "File could not be opened";
        exit(1);
    }

    long int accountNum[5];
    char firstNam[10][5];
    char lastNam[15][5];
    double bal[5];

    for (int i = 0; i < 5; i++)
    {
        outputClientFile >> accountNum[i] >> firstNam[i] >> lastNam[i] >> bal[i];
    }

    outputClientFile.close();

    long int input;
    bool found = false;

    cout << "Enter Account Number:" << endl;
    cin >> input;
    for (int i = 0; i < 5; i++)
    {
        if (input == accountNum[i])
        {
            cout << "Account Found!" << endl;
            cout << "Name:" << firstNam[i] << " " << lastNam[i] << endl;
            cout << "Balance:" << bal[i] << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Account Not Found!" << endl;
    }
}
