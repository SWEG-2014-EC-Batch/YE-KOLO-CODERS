#include <iostream>
using namespace std;

int main()
{

    int j,i;
    cout << "Enter the number of people";
    cin >> j;
    for (i = 1;i<=j;i++)
    {

        float Height, Weight;

        cout << "Enter Height in meters:";
        cin >> Height;
        cout << "Enter Weight in kilograms: ";
        cin >> Weight;

        float BMI;
        BMI = Weight / (Height * Height);
        cout << "your BMI is:" << BMI;

        char r;
        cout << "Please insert your gender (M) For male or (F)For female): ";
        cin >> r;
        if (r =='M'|| r =='m')
        {
            if (BMI >= 19 && BMI <= 25)
            {
                cout << "You are healthy";
            }

            else if (BMI<=19)
            {
                cout << "You are underweight";
            }

            else if (BMI>=25)
            {
                cout << "You are overweight";
            }
        }
        else if(r =='F' || r =='f')
        {
            if (BMI >= 18 && BMI <= 24)
                cout << "You are healthy";
            else if (BMI<=19)
                cout << "You are underweight";
            else if (BMI>=24)
                cout << "You are overweight";
        }
        else
        {
            cout<<"Wrong input enter (M) or (F)";
        }
    }

    return 0;
}

