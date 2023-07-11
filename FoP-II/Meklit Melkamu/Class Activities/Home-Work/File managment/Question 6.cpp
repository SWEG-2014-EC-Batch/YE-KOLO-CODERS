#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 20;

struct Student 
{
  string name;
  double exam1;
  double exam2;
  double homework;
  double finalExam;
  double finalGrade;
  char letterGrade;
};

void calculateFinalGrade(Student& student) 
{
  student.finalGrade = 0.20 * student.exam1 + 0.20 * student.exam2
                      + 0.35 * student.homework + 0.25 * student.finalExam;
  if (student.finalGrade >= 90)
   {
    student.letterGrade = 'A';
   } 
  else if (student.finalGrade >= 80) 
  {
    student.letterGrade = 'B';
  } 
  else if (student.finalGrade >= 70) 
  {
    student.letterGrade = 'C';
  } 
  else if (student.finalGrade >= 60)
  {
    student.letterGrade = 'D';
  }
   else 
  {
    student.letterGrade = 'F';
  }
}

int main()
 {
  Student students[MAX_STUDENTS];
  int numStudents = 0;

  while (numStudents < MAX_STUDENTS) 
  {
    cout << "Enter student #" << (numStudents + 1) << " information:" << endl;
    cout << "Name: ";
    getline(cin, students[numStudents].name);
    cout << "Exam 1: ";
    cin >> students[numStudents].exam1;
    cout << "Exam 2: ";
    cin >> students[numStudents].exam2;
    cout << "Homework: ";
    cin >> students[numStudents].homework;
    cout << "Final Exam: ";
    cin >> students[numStudents].finalExam;
    cin.ignore(); 
    calculateFinalGrade(students[numStudents]);
    numStudents++;

    char choice;
    cout << "Do you want to enter another student? (y/n)";
    cin >> choice;
    if (choice != 'y' && choice != 'Y') 
    {
      break;
    }
    cin.ignore(); // consume the newline character
 }

  ofstream outfile("grades.txt");
  if (outfile.fail()) 
  {
    cerr << "Error: Could not open file." << endl;
    exit(1);
  }

  for (int i = 0; i < numStudents; i++)
   {
    outfile << students[i].name << " " << students[i].exam1 << " "
            << students[i].exam2 << " " << students[i].homework << " "
            << students[i].finalExam << " " << students[i].finalGrade << " "
            << students[i].letterGrade << endl;
    cout << "Name: " << students[i].name << endl;
    cout << "Final Grade: " << students[i].finalGrade << endl;
    cout << "Letter Grade: " << students[i].letterGrade << endl;
  }

  outfile.close();
  return 0;
}