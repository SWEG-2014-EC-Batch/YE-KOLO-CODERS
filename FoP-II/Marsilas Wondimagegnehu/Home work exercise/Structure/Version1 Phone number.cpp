#include <iostream>
using namespace std;

struct phone_number{
      int areaCode;
      int exchange;
      int number;
	
} ;
  
  
int main(){
    struct phone_number phone[2];
    
    for(int i = 0; i < 2; i++){
    cout<<"Enter " << i+1 << " area code ";
	cin>>phone[i].areaCode;	
	cin.ignore();
	cout<<"Enter " << i+1 << " the exchange num ";
	cin>> phone[i].exchange;
	cin.ignore();
	cout<<"Enter " << i+1 <<" the number ";
	cin>> phone[i].number;
	cin.ignore();
	}
	cout << endl;
	for(int i = 0; i < 2; i++){
		
		cout<<"Phone " << i+1 << " details" <<"\t"<<"(" <<phone[i].areaCode<<") "<< phone[i].exchange<<"-" << phone[i].number<<endl;
	 	}
	return 0;
}
