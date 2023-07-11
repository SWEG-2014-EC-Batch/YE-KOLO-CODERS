#include <iostream>
using namespace std;

struct StudentAttribute
{
    int studentId;
    char studentName[100];
    double testMark;
    double finalMark;
};

struct StudentAttribute Student;

int main()
{
    int sum;

cout<<"Enter Student Id:";
cin>>Student.studentId; 

 cout<<"Enter Name:";
cin.ignore();
cin.getline(Student.studentName,100);
  
cout<<"Enter Test Mark:";
cin>>Student.testMark;

cout<<"Enter Final Mark:";
cin>>Student.finalMark;

sum=Student.testMark+Student.finalMark;

cout<<"Name:"<<Student.studentName<<endl;
cout<<"ID: "<<Student.studentId<<endl;
cout<<"Test Mark: "<<Student.testMark<<endl;
cout<<"Final Mark: "<<Student.finalMark<<endl;
cout<<"Total:"<<sum<<endl;



}
