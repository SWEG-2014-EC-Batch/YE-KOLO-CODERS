#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // for exit()

using namespace std;

const int MAX_CUSTOMERS = 5;

struct Customer
 {
  int account_number;
  string first_name;
  string last_name;
  double balance;
};

int main() 
{
  Customer customers[MAX_CUSTOMERS];
  int account_number;

  
  ifstream infile("customers.txt");
  if (infile.fail()) 
  {
    cerr << "Error: Could not open file." << endl;
    exit(1);
  }
  for (int i = 0; i < MAX_CUSTOMERS; i++) 
  {
    infile >> customers[i].account_number >> customers[i].first_name
           >> customers[i].last_name >> customers[i].balance;
  }
  infile.close();

  //search for customer
  cout << "Enter account number: ";
  cin >> account_number;
  bool found = false;
  for (int i = 0; i < MAX_CUSTOMERS; i++) 
  {
    if (customers[i].account_number == account_number) 
    {
      cout << "Name: " << customers[i].first_name << " " << customers[i].last_name << endl;
      cout << "Balance: " << customers[i].balance << endl;
      found = true;
      break;
    }
  }
  if (!found) 
  {
    cout << "Customer not found." << endl;
  }

  return 0;
}
