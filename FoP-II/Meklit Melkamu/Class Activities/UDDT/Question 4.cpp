#include <iostream>
using namespace std;
struct student
{
    char ID[15];
    char name[15];
    double test_mark[15];
    double final_mark[15];

} records[10];

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
   cout<<"ENTER THE ID OF THE"<<i+1<<"STUDENT:";
   cin.ignore();
   cin.getline(records[i].ID,15);
   cout<<"ENTER THE NAME OF THE"<<i+1<<"STUDENT:";
   cin.ignore();
   cin.getline(records[i].name,15);
   cout<<"ENTER THE TEST MARK OF THE"<<i+1<<"STUDENT:";
   cin>>records[i].test_mark[i];
   cout<<"ENTER THE FINAL MARK OF THE"<<i+1<<" STUDENT:";
   cin>>records[i].final_mark[i];
   }
  for (int i=0;i<num;i++)
  {
   cout<<"THE ID OF THE"<<i+1<<" "<<"STUDENT"<<records[i].ID<<endl;
   cout<<"THE NAME OF THE"<<i+1<<" "<<"STUDENT"<<records[i].name<<endl;
   cout<<"THE TEST MARK OF THE "<<i+1<<" "<<"STUDENT"<<records[i].test_mark[i]<<endl;
   cout<<"THE FINAL MARK OF THE"<<i+1<<" "<<"STUDENT"<<records[i].final_mark[i]<<endl;
  }
    return 0;
}
