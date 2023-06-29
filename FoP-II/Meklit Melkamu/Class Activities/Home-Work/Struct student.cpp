#include<iostream>
using namespace std;
struct student
{
    char ID[15],name[15];
    int test_mark,final_mark;
    int total;
}record[20];
int main()
{
    int num;
    cout<<"ENTER THE NUMBER OF STUDENTS:";
    cin>>num;
    if(num>20)
    { 
        cout<<"INVALID ENTRY!";
        return 0;
    }
    for(int i=0;i<num;i++)
    {

    cout<<"ENTER THE ID OF THE STUDNET:";
    cin.ignore();
    cin.getline(record[i].ID,15);
    cout<<"ENTER THE NAME OF THE STUDNET:";
    cin.getline(record[i].name,15);
    cout<<"ENTER TEST MARK:";
    cin>>record[i].test_mark;
    cout<<"ENTER FINAL MARK:";
    cin>>record[i].final_mark;

    record[i].total=record[i].test_mark+record[i].final_mark;
    cout<<"THE ID OF THE STUDENT IS:"<<" "<<record[i].ID<<endl;
    cout<<"THE TOTAL MARK OF"<<" "<<record[i].name<<"is"<<" "<<record[i].total<<endl;

    }
return 0;
}
