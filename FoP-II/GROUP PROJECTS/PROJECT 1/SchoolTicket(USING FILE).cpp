#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char fileName[50];
    ofstream ticketInfo;

    cout<<"Enter File Name:";
    cin.ignore();
    cin.getline(fileName,50);


    ticketInfo.open(fileName,ios::out);

    if(!ticketInfo)
    {
        cout<<"Unable to open file."<<endl;
        exit (1);
    }


    int ticket_number, person_code, entrance_fee, num_infants = 0, num_children = 0, num_teens = 0, num_adults = 0;
    int total_people = 0, total_sales = 0; // Declare and Initialize the required variables.

    cout << "Enter the ticket number, followed by the person code (1, 2, 3, or 4):\n";
    cout << "Insert a negatie number or zero(0) to terminate." << endl;
    do
    {
        cin >> ticket_number >> person_code; // accept ticket number and person code consecutively

        if (cin.fail() || person_code <= 0) // cin.fail() checks if the input operation failed
        {
            break;
        }

        if (ticket_number <= 0) // checks if the input value for person_code is less than or equal to zero.
        {
            break;
        }

        switch (person_code)
        {
        case 1:
            num_infants++;
            entrance_fee = 5;
            break;
        case 2:
            num_children++;
            entrance_fee = 10;
            break;
        case 3:
            num_teens++;
            entrance_fee = 20;
            break;
        case 4:
            num_adults++;
            entrance_fee = 20;
            break;
        default:
            cout << "Invalid code" << endl;
            total_people--;
            break;
        }

        total_people++;
        total_sales += entrance_fee;

        cout << "Enter the ticket number, followed by the person code (1, 2, 3, or 4):\n"; // prompt user to enter ticket number and code

    } while (true);

    ticketInfo<<"NUMBER OF INFANTS:"<<num_infants<<'\n'<<"NUMBER OF CHILDREN:"<<num_children<<'\n'<<"NUMBER OF TEENS:"<<num_teens<<'\n'<<"NUMBER OF ADULTS:"<<num_adults<<'\n'<<"TOTAL ATTENDEES:"<<total_people<<'\n'<<"TOTAL SALES:"<<total_sales<<'\n';
    ticketInfo.close();

    return 0;
}