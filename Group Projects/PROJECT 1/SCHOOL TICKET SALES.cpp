#include <iostream>
using namespace std;

int main() 
{
    int ticket_number, person_code, entrance_fee, num_infants = 0, num_children = 0, num_teens = 0, num_adults = 0;
    int total_people = 0, total_sales = 0;   //Declare and Initialize the required variables.


    cout << "Enter the ticket number, followed by the person code (1, 2, 3, or 4):\n";
    cout<<"Insert a negatie number or zero(0) to terminate<<endl;
    do {
        cin >> ticket_number >> person_code; //accept ticket number and person code consecutively
	    cout << "Enter the ticket number, followed by the person code (1, 2, 3, or 4):\n";

        if (cin.fail() || person_code <= 0)  // cin.fail() checks if the input operation failed
        {
            break;
        }

        if (ticket_number <= 0) //checks if the input value for person_code is less than or equal to zero.
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
                return 0;         
	}
	    
        total_people++;
        total_sales+= entrance_fee;
		
        } while (true);                    
    cout<<"\nTotal number of people: "<<total_people <<endl;
    cout<<"total ticket sales: "<<total_sales <<" ETB\n" <<endl; 
    cout<<"\nBreakdown by person code: \n ";
    cout<<"1(infants): "<<num_infants <<" people\n";
    cout<<"2(child): "<<num_children <<" people\n";
    cout<<"3(teenager) : "<<num_teens <<" people\n";
    cout<<"4(adult): "<<num_adults <<" people\n";
    cout<<"Total Attendees; "<<total_people;

   return 0;
}
