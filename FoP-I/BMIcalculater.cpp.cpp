#include<iostream>
using namespace std;
int main()
{
     int n,i;
     cout << "ENTER THE NUMBER OF PEOPLE:";
     cin >> n;
     for (i = 0; i <= n; i++)
{
     float w,h;
     cout <<"ENTER YOUR WEIGHT IN KILOGRAMS:";
     cin >>w;
     cout << "ENTER YOUR HEIGHT IN METERS:";
     cin >>h;
     float BMI =w/(h*h);
     char g;
     cout <<"ENTER GENDER (M/F) IN UPPER CASE:";
     cin >> g;
     if (g ='M')
{
    if (BMI <= 19)
{
    cout << "YOU ARE UNDERWEIGHT";
}
    else if (BMI <= 25)
{
    cout << "YOU ARE IDEAL WEIGHT";
}
    else
{
    cout << "YOU ARE OVERWEIGHT";
}
}
   else if (g ='F')
{
    if (BMI <= 18)
{
    cout << "YOU ARE BELOW NORMAL WEIGHT";
} else if (BMI <= 24)
{
    cout << "YOU ARE NORMAL WEIGHT";
}
  else
{
    cout << "YOU ARE OVERWEIGHT";
}
}
}
  return 0;

}
