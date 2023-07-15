#include <iostream>
using namespace std;

void inputInformation(int &ticket_number, int &person_code);
void ticketCounter(int &entrance_fee, int &num_infants, int &num_teens, int &num_children, int &num_adults, int &total_people, int &total_sales);
void outputSales();

void inputInformation(int &ticket_number, int &person_code)
{
    cout << "INSERT 0 OR A NEGATIVE NUMBER TO TERMINATE." << endl;
    cout << "Enter Ticket Number:";
    cin >> ticket_number;
    cout << "Enter Person Code(1,2,3,4):";
    cin >> person_code;
}

void ticketCounter(int &entrance_fee, int &num_infants, int &num_teens, int &num_children, int &num_adults, int &total_people, int &total_sales)
{
    int person_code, ticket_number;

    do
    {

        entrance_fee = 0;

        inputInformation(ticket_number, person_code);

        if (cin.fail() || person_code <= 0)
        {
            break;
        }

        if (ticket_number <= 0)
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

    } while (true);
}

void outputSales()
{
    int entrance_fee = 0;
    int num_infants = 0;
    int num_teens = 0;
    int num_children = 0;
    int num_adults = 0;
    int total_people = 0;
    int total_sales = 0;

    ticketCounter(entrance_fee, num_infants, num_teens, num_children, num_adults, total_people, total_sales);

    cout << "Breakdown by person code:" << endl;
    cout << "Number of Infants(1): " << num_infants << endl;
    cout << "Number of Children(2): " << num_children << endl;
    cout << "Number of Teenagers(3): " << num_teens << endl;
    cout << "Number of Adults(4): " << num_adults << endl;
    cout << "Total Attendees: " << total_people << endl;
    cout << "Total ticket sales: " << total_sales << " ETB" << endl;
}

int main()
{
    outputSales();
    return 0;
}