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
    double V, T, ANSWER;

    cout << "ENTER WINDSPEED (in m/s): ";
    cin >> V;
    

    cout << "ENTER TEMPRATURE (in degree Celcius):";
    cin >> T;
    

    if (T <= 10)
    {

        ANSWER = index(V, T);
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
