#include<cstring>
#include <iostream>

using namespace std;

int main()
{
    char team[][11] = {"Ets1029/14", "Ets1030/14", "Ets1024/14", "Ets1035/14", "Ets1032/14"};

    char id[11];

    cout << "Enter ID: ";
    cin.getline(id, 11);

    for(int i=0; i<=5; i++)
    {
        if(strcmp(team[i], id) == 0)
        {
            cout << "ID Found:" << id << endl;
            return 0;
        }
    }

    cout << "ID not found." << endl;

    return 0;
