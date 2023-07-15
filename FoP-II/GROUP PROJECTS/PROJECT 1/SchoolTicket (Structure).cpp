#include <iostream>
using namespace std;
struct People
{
    int num_infants;
    int num_children;
    int num_teens;
    int num_adults;
    int total_people;
    int total_sale;
    int enterance_fee;
    int ticket_number;
    int person_code;

};
People personInfo={0,0,0,0,0,0};
int main()
{
    cout << "Enter the ticket number, followed by the person code (1, 2, 3, or 4):"<<endl;
    cout<<"Insert a negatie number or zero(0) to terminate."<<endl;
    do {
        personInfo.enterance_fee=0;
        cin >> personInfo.ticket_number >> personInfo.person_code; 


        if (cin.fail() || personInfo.person_code <= 0)  // cin.fail() checks if the input operation failed
        {
            break;
        }

        if (personInfo.ticket_number <= 0) //checks if the input value for personInfo. is less than or equal to zero.
        {
            break;
        }

        switch (personInfo.person_code)
        {
            case 1:
               personInfo.num_infants++;
	       personInfo.enterance_fee = 5;
	       break;
            case 2:
                personInfo.num_children++;
                personInfo.enterance_fee = 10;
                break;
            case 3:
                personInfo.num_teens++;
                personInfo.enterance_fee = 20;
                break;
            case 4:
                personInfo.num_adults++;
                personInfo.enterance_fee = 20;
                break;
            default:                         
                cout << "Invalid code" << endl;
		personInfo.total_people--;
                break;         
	}
	    
        personInfo.total_people++;
        personInfo.total_sale+= personInfo.enterance_fee;
	    
cout << "Enter the ticket number, followed by the person code (1, 2, 3, or 4):"<<endl; 
 cout<<"Insert a negatie number or zero(0) to terminate."<<endl;
		
        } while (true); 

   
    cout<<"\nBreakdown by person code\n ";
    cout<<"Number of Infants (1): "<<personInfo.num_infants <<endl;
    cout<<"Number of Children (2): "<<personInfo.num_children <<endl;
    cout<<"Number of Teenagers (3): "<<personInfo.num_teens <<endl;
    cout<<"Number of Adults(4): "<<personInfo.num_adults <<endl;
    cout<<"Total Attendees: "<<personInfo.total_people<<endl; 
    cout<<"Total ticket sales: "<<personInfo.total_sale<<"ETB" <<endl; 

}