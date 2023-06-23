#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double resistanceArray[] = {16, 27, 39, 56, 81};
void currentInput(double currentArray[5])
{
    cout << "Enter 5 currents: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> currentArray[i];
    }
}

void powerCalculator(double powerArray[5], double currentArray[5])
{

    for (int i = 0; i < 5; i++)
    {
        powerArray[i] = resistanceArray[i] * pow(currentArray[i], 2);
    }
}
void totalcalc(double total[3], double currentArray[5], double powerArray[5])
{
    double sumResistance = 0;
    double sumCurrent = 0;
    double sumPower = 0;

    for (int i = 0; i < 5; i++)
    {
        sumResistance += resistanceArray[i];
        sumCurrent += currentArray[i];
        sumPower += powerArray[i];
    }

    total[0] = sumResistance;
    total[1] = sumCurrent;
    total[2] = sumPower;
}

void printOutput(double total[3], double currentArray[5], double powerArray[5])
{
    double resistanceArray[] = {16, 27, 39, 56, 81};

    cout << setw(10) << "RESISTANCE" << setw(10) << "CURRENT" << setw(10) << "POWER" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << setw(10) << resistanceArray[i] << setw(10) << currentArray[i] << setw(10) << powerArray[i] << endl;
    }

    cout << "TOTAL: "<< total[0] << setw(10) << total[1] << setw(10) << total[2] << endl;
}

int main()
{
    double currentArray[5];
    double powerArray[5];
    double total[3];

    currentInput(currentArray);
    powerCalculator(powerArray, currentArray);
    totalcalc(total, currentArray, powerArray);
    printOutput(total, currentArray, powerArray);

    return 0;
}