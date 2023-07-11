#include <iostream>
using namespace std;
struct person
{
     char name[20];
     char gender;
     int age;
     double weight;
     double height;
     double BMI;
}persons[10];

int main()
{

   int num;
   cout<<"ENTER THE NUMBER OS PEOPLE[less than 10]:";
   cin>>num;
   if(num>10)
   {
    cout<<"YOU HAVE ENTERED AN INVALID NUMBER!";
    return 0;
   }
    for(int i=0;i<num;i++)
   {
    cout<<"ENTER THE NAME OF THE USER:";
    cin.ignore();
    cin.getline(persons[i].name,20);
    cout<<"ENTER THE GENGER OF THE USER[F/M]:";
    cin>>persons[i].gender;
    cout<<"ENTER THE AGE OF THE USER:";
    cin>>persons[i].age;
    cout<<"ENTER THE WEIGHT OF THE USER:";
    cin>>persons[i].weight;
    cout<<"ENTER THE HEIGHT OF THE USER[:";
    cin>>persons[i].height;
    persons[i].BMI=(persons[i].weight)/(persons[i].height)*(persons[i].height);
    cout<<"THE BMI OF THE"<<i+1<<" "<<"USER IS:"<<persons[i].BMI;
    cout<<"THE USER IS:"<<persons[i].name;
 }
}
