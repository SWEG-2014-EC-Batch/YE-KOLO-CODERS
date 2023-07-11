#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string name;
    double exam1;
    double exam2;
    double homework;
    double final_exam;
    double final_grade;
    char letter_grade;
};

void calculate_final_grade(Student& student) {
    student.final_grade = 0.20 * student.exam1 + 0.20 * student.exam2 +
                           0.35 * student.homework + 0.25 * student.final_exam;
    if (student.final_grade >= 90) {
        student.letter_grade = 'A';
    } else if (student.final_grade >= 80) {
        student.letter_grade = 'B';
    } else if (student.final_grade >= 70) {
        student.letter_grade = 'C';
    } else if (student.final_grade >= 60) {
        student.letter_grade = 'D';
    } else {
        student.letter_grade = 'F';
    }
}

void enter_student_info(Student* students, int num_students) {
    for (int i = 0; i < num_students; i++) {
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Exam 1 grade: ";
        cin >> students[i].exam1;
        cout << "Exam 2 grade: ";
        cin >> students[i].exam2;
        cout << "Homework grade: ";
        cin >> students[i].homework;
        cout << "Final exam grade: ";
        cin >> students[i].final_exam;
        calculate_final_grade(students[i]);
    }
}

void write_student_info_to_file(Student* students, int num_students) {
    ofstream outfile("student_records.txt");
    if (!outfile) {
        cerr << "Error: could not open file for writing" << endl;
        return;
    }
    for (int i = 0; i < num_students; i++) {
        outfile << students[i].name << " " << students[i].exam1 << " "
                << students[i].exam2 << " " << students[i].homework << " "
                << students[i].final_exam << " " << students[i].final_grade << " "
                << students[i].letter_grade << endl;
    }
    outfile.close();
}

int main() {
    const int MAX_STUDENTS = 20;
    Student students[MAX_STUDENTS];
    int num_students;
    cout << "Enter the number of students (up to 20): ";
    cin >> num_students;
    enter_student_info(students, num_students);
    write_student_info_to_file(students, num_students);
    for (int i = 0; i < num_students; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Exam 1 grade: " << students[i].exam1 << endl;
        cout << "Exam 2 grade: " << students[i].exam2 << endl;
        cout << "Homework grade: " << students[i].homework << endl;
        cout << "Final exam grade: " << students[i].final_exam << endl;
        cout << "Final grade: " << students[i].final_grade << endl;
        cout << "Letter grade: " << students[i].letter_grade << endl << endl;
    }
    return 0;
}
