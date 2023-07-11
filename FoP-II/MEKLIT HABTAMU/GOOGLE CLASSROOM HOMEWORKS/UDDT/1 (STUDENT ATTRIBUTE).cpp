#include <iostream>
#include <iomanip>
using namespace std;

struct StudentAttribute
{
    int studentId;
    char studentName[100];
    double testMark;
    double finalMark;
};

int main()
{
    int num;

    cout << "ENTER NUMBER OF PEOPLE(maximum ):";
    cin >> num;

    while (num > 10)
    {
        cout << "ENTER NUMBER OF PEOPLE(maximum ):";
        cin >> num;
    }

    StudentAttribute Student[num];

   int sum[num];

    for (int i = 0; i < num; i++)
    {

        cout << "Enter Student Id:";
        cin >> Student[i].studentId;

        cout << "Enter Name:";
        cin.ignore();
        cin.getline(Student[i].studentName, 100);

        cout << "Enter Test Mark:";
        cin >> Student[i].testMark;

        cout << "Enter Final Mark:";
        cin >> Student[i].finalMark;

        sum[i] = Student[i].testMark + Student[i].finalMark;
    }
    cout<<"NAME"<<setw(15)<<"ID NUMBER"<<setw(15)<<"TEST MARK"<<setw(15)<<"FINAL MARK"<<setw(15)<<"TOTAL"<<endl;
    for (int i = 0; i < num; i++)
    {
    
     cout<<Student[i].studentName <<setw(15)<<Student[i].studentId <<setw(15)<<Student[i].testMark<<setw(15)<<Student[i].finalMark<<setw(15)<< sum[i]<<endl;
      
    }
}
