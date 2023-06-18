#include <iostream>
#include <cmath>
using namespace std;

double index(double, double);
double index(double speed, double temprature)
{
    return (13.12 + 0.6215 * temprature - 11.37 * pow(speed, 0.16) + 0.3965 * temprature * pow(speed, 0.016));
}

int main()
{
    double velocity, Tempreture, ANSWER;

    cout << "ENTER WINDSPEED (in m/s): ";
    cin >> velocity;
    

    cout << "ENTER TEMPRATURE (in degree Celcius):";
    cin >>Tempreture;
    

    if (Tempreture<= 10)
    {

        ANSWER = index(velocity, Tempreture);
        cout << "WINDCHILL INDEX=" << ANSWER << endl;
        cout<<endl;
    }
    else
    {
        cout << "Temprature is greater than 10, unable to calculate windchill index." << endl;
        cout<<endl;
       return 0;
    }
}
