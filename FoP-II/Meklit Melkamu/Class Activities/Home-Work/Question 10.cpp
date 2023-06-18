#include <iostream>
#include <cmath>
using namespace std;

void feet_To_Meters(int feet, int inches, double& meters, double& centimeters)
 {
    double Inches = feet * 12 + inches;
    double Centimeters = Inches * 2.54;
    meters = Centimeters / 100;
    centimeters = fmod(Centimeters, 100);
}

void meters_To_Feet(double meters, double centimeters, int& feet, int& inches) {
    double Centimeters = meters * 100 + centimeters;
    double Inches = Centimeters / 2.54;
    feet = Inches / 12;
    inches = fmod(Inches, 12);
}

void convert(int option)
{
    if (option == 1) 
{       // feet and inches to meters and centimeters
        int feet, inches;
        double meters, centimeters;
        cout << "Enter length in feet and inches: ";
        cin >> feet >> inches;
        feet_To_Meters(feet, inches, meters, centimeters);
        cout << "Length in meters and centimeters: " << meters << " meters " << centimeters << " centimeters" << endl;
} 
    else if (option == 2)
{      // meters and centimeters to feet and inches
        double meters, centimeters;
        int feet, inches;
        cout << "Enter length in meters and centimeters: ";
        cin >> meters >> centimeters;
        meters_To_Feet(meters, centimeters, feet, inches);
        cout << "Length in feet and inches: " << feet << " feet " << inches << " inches" << endl;
} 
    else 
{
        cout << "Invalid option";
}
}

int main() 
{
    char choice;
    do 
    {
        int option;
        cout << "Select conversion option:(1:convert to meter and centimeters ,2:convert to feet and inches)";
        cin >> option;
        convert(option);
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } 
    while (choice == 'y' || choice == 'Y');

    return 0;
}
