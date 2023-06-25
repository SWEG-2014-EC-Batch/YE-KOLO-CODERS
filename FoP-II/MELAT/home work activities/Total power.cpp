#include <iostream>
#include <cmath>

using namespace std;

const int SIZE = 5;

double resistance[SIZE] = {16, 27, 39, 56, 81};
double current[SIZE];
double power[SIZE];

void get_current() {
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter current " << i+1 << ": ";
        cin >> current[i];
    }
}

void calculate_power() {
    for (int i = 0; i < SIZE; i++) {
        power[i] = resistance[i] * pow(current[i], 2);
    }
}

void display_table() {
    cout << "Resistance\tCurrent\t\tPower" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << resistance[i] << "\t\t" << current[i] << "\t\t" << power[i] << endl;
}
}

double calculate_total_power() {
    double total_power = 0.0;
    for (int i = 0; i < SIZE; i++) {
        total_power += power[i];
    }
    return total_power;
}

int main() {
    get_current();
    calculate_power();
    display_table();
    double total_power = calculate_total_power();
    cout << "\t\t  Total power: " << total_power << endl;
    return 0;
}
