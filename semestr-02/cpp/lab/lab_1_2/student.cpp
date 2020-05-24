/**
 * Author: Pawel Michalik
 * Description: Student class, struct and selection of functions for data manipulation.
 * Date: 25.04.2020
 */
#include <iostream>
#include <algorithm>

using namespace std;

struct Student
{
    /*
    Student class
    */
    string name;
    string surname;
    string student_id;
    int grades[5];
};


void setStudentDetails(Student * student)
{
    /*
    Sets client details from keyboard input.

    @params: pointer to <Student> object.
    @param: topic <string>.
    @param: surname <string>.
    @param: student_id <string>.
    @param: grades <array<int>>.
    */
    cout << "Student:" << endl;
    cout << "   Name:" << endl;
    cin >> student->name;
    cout << "   Surname:" << endl;
    cin >> student->surname;
    cout << "   Id number: " << endl;
    cin >> student->student_id;
    cout << "   Grades list [5]:" << endl;
    for(int i=0; i < 5; i++) {
        cin >> student->grades[i];
    }
};

float getStudentGradeAverage(Student * student)
{
    /*
    Calculates average of student grades.

    @params: *student <Student>, pointer to <Student> object.
    */
    float sum = 0;
    int cnt = 1;
    for(int i=0; i<5; i++) {
        sum+=student->grades[i];
        cnt = i+1;
    }
    return sum/cnt;
}

void showStudent(Student * student)
{
    /*
    Prints out student details.

    @params: *student <Student>, pointer to <Student> object.
    */
    cout << "Name: " << student->name << endl;
    cout << "Surname: " << student->surname << endl;
    cout << "Id number: " << student->student_id << endl;
    cout << "Grade average: "<< getStudentGradeAverage(student) << endl;
}

int main()
{
    Student student;
    setStudentDetails(&student);
    showStudent(&student);
    cout << "------------------" << endl;
    Student * student2 = new Student;
    setStudentDetails(student2);
    showStudent(student2);
    delete student2;
};

