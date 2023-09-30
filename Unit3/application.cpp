#include "Student.h"
#include <fstream>
#include <iostream>

using namespace std;
Student::Student(string file_name, int num_std)
{
    ifstream InputFile;
    InputFile.open(file_name);

    if(!InputFile)
    {
        cout<<"Error: The path or file does not exist";
        exit(1);
    }

    num_students = num_std;

    student_inf = new string*[num_students];
    for(int i=0; i<num_students; i++)
    {
        student_inf[i] = new string[2];
    }

    test_grade = new double*[num_students];
    for(int i=0; i<num_students; i++)
    {
        test_grade[i] = new double[3];
    }

    int index=0;
    while(!InputFile.eof())
    {
        InputFile >> student_inf[index][0] >> student_inf[index][1];
        InputFile >> test_grade[index][0] >> test_grade[index][1] >> test_grade[index][2];

        index++;
    }

    InputFile.close();

}

Student::~Student()
{
    for(int i=0;i<num_students; i++)
    {
        delete[] student_inf[i];
        delete[] test_grade[i];
    }

    delete[] student_inf;
    delete[] test_grade;

    student_inf = nullptr;
    test_grade = nullptr;

}

int Student::find_student(string name)
{
    int index = -1;
    for(int i=0; i<num_students; i++)
    {
        if(name == student_inf[i][0])
        {
            index = i;
            cout<<"Student was found."<<endl;
            break;
        }
    }

    if(index==-1)
    {
        cout<<"Student was not found."<<endl;
    }

    return index;
}

void Student::compute_final_grade(string outputfile_name)
{
    ofstream OutputFile;
    OutputFile.open(outputfile_name);
    double final_grade;

    for(int i=0; i<num_students; i++)
    {

           final_grade = (test_grade[i][0]+test_grade[i][1]+test_grade[i][2])/3;
           OutputFile << student_inf[i][0] <<" Final Grade: "<<final_grade<<endl; 
        
    }
}