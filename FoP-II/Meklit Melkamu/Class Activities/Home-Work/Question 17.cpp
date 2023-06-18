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
    double windSpeed, temperature, windChillIndex;

    cout << "ENTER WINDSPEED: ";
    cin >> windSpeed;
    

    cout << "ENTER TEMPRATURE (in degree Celcius):";
    cin >> temperature;
    

    if (temperature<= 10)
    {

        windChillIndex = index(windSpeed, temperature);
        cout << "Wind Chill Index = " << windChillIndex << endl << endl;
    }
    else
    {
        cout << "Temprature is greater than 10, unable to calculate windchill index." << endl;
        cout<<endl;
       return 0;
    }
    return 0;
}
