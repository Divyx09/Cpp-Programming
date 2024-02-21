#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string stdName;
    float perc;
};

int main()
{
    cout << "Program Created By Divy"<< endl;
    Student std1, std2;
    std1.rollNo = 101;
    std1.stdName = "Divy Attarde";
    std1.perc = 98.20f;
    std2.rollNo = 102;
    std2.stdName = "Mekal Bhavra";
    std2.perc = 99.99f;
    cout << "student 1..."<< "\n";
    cout << "Student's Roll No.: " << std1.rollNo << "\n";
    cout << "Student's Name: " << std1.stdName << "\n";
    cout << "Student's Percentage: " << std1.perc << "\n";
    cout << "student 2..."<< "\n";
    cout << "Student's Roll No.: " << std2.rollNo << "\n";
    cout << "Student's Name: " << std2.stdName << "\n";
    cout << "Student's Percentage: " << std2.perc << "\n";
    return 0;
}
