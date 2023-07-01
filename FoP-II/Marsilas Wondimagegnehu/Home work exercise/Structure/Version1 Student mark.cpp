#include <iostream>
#include <string>
using namespace std;

struct studentAttribute{
	char id[10];
	char name[100];
	double testMark;
	double final_mark;	
	
};
  struct studentAttribute student[10];

int main(){
	int sum[10], num;
	cout<<"Enter the number of people ";
	cin>> num;
	if(num > 10){
		cout<<"you can't enter more than 10 ";
		return 0;
	}
	for(int i = 0; i < num; i++){
	cout<<"State "<<i+1 <<" student id ";
	cin.ignore();
	cin.getline (student[i].id, 10);
	
	cout<<"what is "<<i+1 <<" student name ";
	cin.ignore();
	cin.getline(student[i].name, 100);
	 
	cout<<"State "<<i+1 <<" student test mark ";
	cin>> student[i].testMark;
	 
	cout<<"State "<<i+1 <<" student final mark ";
	cin>> student[i].final_mark;
	 
	 sum[i] = student[i].final_mark + student[i].testMark;
	 
	}
	cout << endl;
	for(int i = 0; i < num; i++){
		cout<<"the id of the "<<i+1 <<" student "<<student[i].id <<endl;
		cout<<"the name of the "<<i+1 <<" student "<<student[i].name<<endl;
		cout<<"the testMark of the "<<i+1<<"  student  "<<student[i].testMark <<endl;
		cout<<"the final_mark of the "<<i+1<<" student "<<student[i].final_mark <<endl;
		cout<<"the sum of the "<<i+1<<" student "<<sum[i] <<endl;
		cout << endl;
	}
	return 0;
}
