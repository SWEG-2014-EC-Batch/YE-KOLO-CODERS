
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Employee {
    string name;
    double payRate;
    int hours;
};

void printPayReport(const Employee& employee) {
    double regularPay = 0.0;
    double overtimePay = 0.0;
    double grossPay = 0.0;

    if (employee.hours <= 40) {
        regularPay = employee.hours * employee.payRate;
    } else {
        regularPay = 40 * employee.payRate;
        overtimePay = (employee.hours - 40) * 1.5 * employee.payRate;
    }

    grossPay = regularPay + overtimePay;

    cout << "Name: " << employee.name << endl;
    cout << "Pay Rate: " << fixed << setprecision(2) << employee.payRate << endl;
    cout << "Hours: " << employee.hours << endl;
    cout << "Regular Pay: " << fixed << setprecision(2) << regularPay << endl;
    cout << "Overtime Pay: " << fixed << setprecision(2) << overtimePay << endl;
    cout << "Gross Pay: " << fixed << setprecision(2) << grossPay << endl;
    cout << endl;
}

int main() {
    ifstream inputFile("data.txt");
    if (!inputFile) {
        
        
    

    string line;
    Employee employee;

    while (getline(inputFile, line)) {
        if (line.empty()) {
            printPayReport(employee);
            continue;
        }

        if (line == "Name") {
            getline(inputFile, line); // Skip the empty line
            continue;
        }

        if (line == "Rate") {
            getline(inputFile, line); // Skip the empty line
            continue;
        }

        if (line == "Hours") {
            getline(inputFile, line); // Skip the empty line
            continue;
        }

        if (employee.name.empty()) {
            employee.name = line;
        } else if (employee.payRate == 0.0) {
            employee.payRate = stod(line);
        } else {
            employee.hours = stoi(line);
        }
    }

    printPayReport(employee);

    inputFile.close();

    return 0;
}}
.
