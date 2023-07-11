#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Customer {
    int account_number;
    string first_name;
    string last_name;
    double balance;
};

void create_file() {
    ofstream outfile("customer_records.txt");
    if (!outfile) {
        cerr << "Error: could not open file for writing" << endl;
        return;
    }
    for (int i = 0; i < 5; i++) {
        Customer customer;
        customer.account_number = 1000 + i;
        cout << "Enter first name for account " << customer.account_number << ": ";
        cin >> customer.first_name;
        cout << "Enter last name for account " << customer.account_number << ": ";
        cin >> customer.last_name;
        cout << "Enter balance for account " << customer.account_number << ": ";
        cin >> customer.balance;
        outfile << customer.account_number << " " << customer.first_name << " "
                << customer.last_name << " " << customer.balance << endl;
    }
}

void search_file() {
    ifstream infile("customer_records.txt");
    if (!infile) {
        cerr << "Error: could not open file for reading" << endl;
        return;
    }
    int account_number;
    cout << "Enter account number to search for: ";
    cin >> account_number;
    while (infile) {
        Customer customer;
        infile >> customer.account_number >> customer.first_name >> customer.last_name >> customer.balance;
        if (customer.account_number == account_number) {
            cout << "Name: " << customer.first_name << " " << customer.last_name << endl;
            cout << "Balance: " << customer.balance << endl;
            return;
        }
    }
    cout << "Error: account number not found" << endl;
}

int main() {
    create_file();
    search_file();
    return 0;
}
