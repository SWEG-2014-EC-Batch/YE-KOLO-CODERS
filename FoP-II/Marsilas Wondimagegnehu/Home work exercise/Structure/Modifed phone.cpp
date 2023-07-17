#include <iostream>
using namespace std;

struct phone_number{
      int areaCode;
      int exchange;
      int number;
	
};
    phone_number Phone;
struct program {
	phone_number Phone;
	char name[20];
};

	struct program record[10];
	
void print( program record[10], struct phone_number Phone){
	cout << " Name \t"<< " Phone Number\n";
	for(int i = 0; i < 10; i++){
	cout << i+1 << " "<< record[i].name << "\t ";
	cout << "(" << record[i].Phone.areaCode << ") " << record[i].Phone.exchange << "-";
	cout << record[i].Phone.number << endl;
	}

}
	
int main() {
    cout << "Enter the 10 people info\n";
	for(int i = 0; i < 10; i++){
		
	cout << "Enter the " << i+1 << " name " ;
	cin >> record[i].name; 
	
	cout << "Enter area code ";
	cin >> record[i].Phone.areaCode;
	
	cout << "Enter the exchange num ";
	cin >> record[i].Phone.exchange;
	
	cout << "Enter the number ";
	cin >> record[i].Phone.number;
	cout << "==============================\n";		
	
	}
	 print( record, Phone);

	return 0;
}
