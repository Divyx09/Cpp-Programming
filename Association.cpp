#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    Student(string name)
    {
        this->name = name;
    }
};

class Teacher
{
public:
    string name;
    Student *student;

    Teacher(string name)
    {
        this->name = name;
        this->student = nullptr;
    }
    void setStudent(Student *s)
    {
        student = s;
    }

    void print()
    {
        if (student)
        {
            cout << name << " is teaching " << student->name << endl;
        }
        else
        {
            cout << name << " is not teaching any students." << endl;
        }
    }
};

int main()
{
    Teacher t1("Mr. Smith");
    Student s1("John");

    t1.setStudent(&s1);
    t1.print();

    return 0;
}