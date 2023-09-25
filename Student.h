#include <string>

using namespace std;

class Student
{
    private:
        string** student_inf;
        double** test_grade;
        int num_students;

    public:

    Student(){};
    Student(string file_name, int num_std);
    ~Student();
    void compute_final_grade();
    int find_student(string name);
};