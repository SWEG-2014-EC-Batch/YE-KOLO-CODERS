#include <iostream>
using namespace std;

void input(int);
void calculator();
void output();

double feet;
double inches;
double meters;
double centimeters;

void input(int choice)
{
  cout << "If you would like to enter length in feet enter (1) in inches(2):";
  cin >> choice;

  if (choice == 1)
  {
    cout << "Enter length in feet: ";
    cin >> feet;
  }
  else if (choice == 2)
  {
    cout << "Enter length in inches: ";
    cin >> inches;
    feet = inches / 12;
  }
}

void calculator()
{

  meters = 0.3048 * feet;
  centimeters = meters * 100;
}

void output()
{
  cout << "In meters: " << meters << "m." << endl;
  cout << "In centimeters: " << centimeters << "cm." << endl;
}
int main()
{
  int option;
  int resumeOption;
  do
  {
    input(option);
    calculator();
    output();

    cout << "Enter (0) if you would like to continue:";
    cin >> resumeOption;

  } while (resumeOption == 0);
}
