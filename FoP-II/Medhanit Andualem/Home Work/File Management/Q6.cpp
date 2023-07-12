#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream studentResult;
    studentResult.open("studentInfo.txt", ios::out);

    if (!studentResult)
    {
        cout << "File not found.";
        exit(1);
    }

    char name[50];
    double exam_1, exam_2, homework, finalExam, finalGrade;
    char grade;
    int num;

    cout << "Enter number of students:";
    cin >> num;
    cin.ignore(); 
    for (int i = 0; i < num; i++)
    {
        cout << "Enter name:";
        cin.getline(name, 50);
        cout << "Enter Homework result:";
        cin >> homework;
        cout << "Enter result of Exam 1, Exam 2 and Final exam:";
        cin >> exam_1 >> exam_2 >> finalExam;

        finalGrade = 0.20 * exam_1 + 0.20 * exam_2 + 0.35 * homework + 0.25 * finalExam;

        if (finalGrade >= 90)
        {
            grade = 'A';
        }
        else if (finalGrade >= 80 && finalGrade <= 89)
        {
            grade = 'B';
        }
        else if (finalGrade >= 70 && finalGrade <= 79)
        {
            grade = 'C';
        }
        else if (finalGrade >= 60 && finalGrade <= 69)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        studentResult << name << '\t' << homework << '\t' << exam_1 << '\t' << exam_2 << '\t' << finalExam << '\t' << finalGrade << '\t' << grade << '\n';
    }
    studentResult.close();

   
}
