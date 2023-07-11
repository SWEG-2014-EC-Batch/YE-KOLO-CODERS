#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

struct Employee {
    int id;
    char sex;
    double hourly_wage;
    int years_with_company;
};

bool compare_by_id(const Employee& e1, const Employee& e2) {
    return e1.id < e2.id;
}

void enter_employee_info(Employee* employees, int num_employees) {
    for (int i = 0; i < num_employees; i++) {
        cout << "Enter information for employee " << i + 1 << ":" << endl;
        cout << "ID number: ";
        cin >> employees[i].id;
        cout << "Sex (M/F): ";
        cin >> employees[i].sex;
        cout << "Hourly wage: ";
        cin >> employees[i].hourly_wage;
        cout << "Years with company: ";
        cin >> employees[i].years_with_company;
    }
}

void write_employee_info_to_file(Employee* employees, int num_employees) {
    ofstream outfile("employee_records.txt");
    if (!outfile) {
        cerr << "Error: could not open file for writing" << endl;
        return;
    }
    for (int i = 0; i < num_employees; i++) {
        outfile << employees[i].id << " " << employees[i].sex << " "
                << employees[i].hourly_wage << " " << employees[i].years_with_company << endl;
    }
    outfile.close();
}

void read_employee_info_from_file(Employee* employees, int num_employees) {
    ifstream infile("employee_records.txt");
    if (!infile) {
        cerr << "Error: could not open file for reading" << endl;
        return;
    }
    for (int i = 0; i < num_employees; i++) {
        infile >> employees[i].id >> employees[i].sex >> employees[i].hourly_wage >> employees[i].years_with_company;
    }
    infile.close();
}

void calculate_employee_pay(Employee* employees, int num_employees) {
    read_employee_info_from_file(employees, num_employees);
    for (int i = 0; i < num_employees; i++) {
        double hours_worked;
        cout << "Enter hours worked for employee " << employees[i].id << ": ";
        cin >> hours_worked;
        double total_pay = hours_worked * employees[i].hourly_wage;
        cout << "Employee " << employees[i].id << " earned $" << total_pay << " this month." << endl;
    }
}

void update_employee_info(Employee* employees, int num_employees) {
    read_employee_info_from_file(employees, num_employees);
    for (int i = 0; i < num_employees; i++) {
        cout << "Enter new hourly wage for employee " << employees[i].id << ": ";
        cin >> employees[i].hourly_wage;
        cout << "Enter new years with company for employee " << employees[i].id << ": ";
        cin >> employees[i].years_with_company;
    }
    ofstream outfile("updated_employee_records.txt");
    if (!outfile) {
        cerr << "Error: could not open file for writing" << endl;
        return;
    }
    for (int i = 0; i < num_employees; i++) {
        outfile << employees[i].id << " " << employees[i].sex << " "
                << employees[i].hourly_wage << " " << employees[i].years_with_company << endl;
    }
    outfile.close();
}

int main() {
    const int NUM_EMPLOYEES = 10;
    Employee employees[NUM_EMPLOYEES];
    enter_employee_info(employees, NUM_EMPLOYEES);
    sort(employees, employees + NUM_EMPLOYEES, compare_by_id);
    write_employee_info_to_file(employees, NUM_EMPLOYEES);
    int choice;
    cout << "Enter 1 to calculate employee pay for the month, or 2 to update employee information: ";
    cin >> choice;
    if (choice == 1) {
        calculate_employee_pay(employees, NUM_EMPLOYEES);
    } else if (choice == 2) {
        update_employee_info(employees, NUM_EMPLOYEES);
    } else {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
