#include <iostream>
#include <string>
#include "Student.h"


using namespace std;


int main()
{
    string file_name = "student_list.txt";
    string output_file_name = "COP4023-FinalGrade.txt";
    string name_student;
    int num_std = 10;
    Student student_list(file_name,10);

    cout<<"Provide the student's name: ";
    cin >> name_student;
    student_list.find_student(name_student);

    student_list.compute_final_grade(output_file_name);

}