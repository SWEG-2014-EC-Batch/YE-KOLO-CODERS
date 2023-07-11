#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_RECORDS = 5;
const int MAX_FIRST_NAME_LENGTH = 10;
const int MAX_LAST_NAME_LENGTH = 15;

struct CustomerRecord {
    int accountNumber;
    char firstName[MAX_FIRST_NAME_LENGTH + 1];
    char lastName[MAX_LAST_NAME_LENGTH + 1];
    double accountBalance;
};

void createCustomerFile(const char* filename) {
    ofstream file(filename); 
    if (!file.is_open()) {
        cerr << "Error: could not create file " << filename << endl;
        return;
    }

    CustomerRecord records[MAX_RECORDS] = {
        {1000, "John", "Doe", 1000.00},
        {1001, "Jane", "Doe", 2000.00},
        {1002, "Bob", "Smith", 3000.00},
        {1003, "Alice", "Jones", 4000.00},
        {1004, "Charlie", "Brown", 5000.00}
    };

    for (int i = 0; i < MAX_RECORDS; ++i) {
        file << records[i].accountNumber << " "
             << records[i].firstName << " "
             << records[i].lastName << " "
             << records[i].accountBalance << endl;
    }

    file.close(); // close the file
}

void searchCustomerRecord(const char* filename, int accountNumber) {
    ifstream file(filename); // open the file for reading
    if (!file.is_open()) { // check if the file was opened successfully
        cerr << "Error: could notopen file " << filename << std::endl;
        return;
    }

    CustomerRecord record;
    bool found = false;

    while (file >> record.accountNumber >> record.firstName >> record.lastName >> record.accountBalance) {
        if (record.accountNumber == accountNumber) {
            cout << "Account Number: " << record.accountNumber << std::endl;
            cout << "Name: " << record.firstName << " " << record.lastName << std::endl;
            cout << "Account Balance: " << record.accountBalance << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Account number " << accountNumber << " not found." << std::endl;
    }

    file.close(); // close the file
}

int main() {
    const char* filename = "customers.txt";
    createCustomerFile(filename);

    int accountNumber;
    cout << "Enter an account number: ";
    cin >> accountNumber;

    searchCustomerRecord(filename, accountNumber);

    return 0;
