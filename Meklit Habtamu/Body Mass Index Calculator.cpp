#include <iostream>
using namespace std;

int main()
{

    int j;
    cout << "Enter the number of people";
    cin >> j;
    for (int i = 1;i<=j;i++)
    {

        float Height, Weight;


        cout << "Enter Height in meters:";
        cin >> Height;

        while(Height<0)
        {
            cout<<"Error Height cannot be negative,re-enter Height:"<<endl;
            cin>>Height;
        }
        cout << "Enter Weight in kilograms: ";
        cin >> Weight;

         while(Weight<0)
        {
            cout<<"Error Weight cannot be negative,re-enter Weight:"<<endl;
            cin>>Weight;
        }

        float BMI;
        BMI = Weight / (Height * Height);
        cout << "your BMI is:" << BMI<<endl;

        char r;
        cout << "Please insert your gender (M) For male or (F)For female): ";
        cin >> r;

         while (toupper(r)!='M' || toupper(r)!='F')
        {
            cout<<"Wrong input enter (M) or (F)"<<endl;
            cin>>r;
        }
        if (toupper(r)=='M')
        {
            if (BMI >= 19 && BMI <= 25)
            {
                cout << "You are healthy"<<endl;
            }

            else if (BMI<19)
            {
                cout << "You are underweight"<<endl;
            }

            else if (BMI>25)
            {
                cout << "You are overweight"<<endl;
            }
        }
        else if(toupper(r)=='F' )
        {
            if (BMI >= 18 && BMI <= 24)
                cout << "You are healthy"<<endl;
            else if (BMI<18)
                cout << "You are underweight"<<endl;
            else if (BMI>24)
                cout << "You are overweight"<<endl;
        }

    }

    return 0;
}
