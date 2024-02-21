#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;

public:
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void introduce()
    {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main()
{
    cout << "Program Created By Divy"<< endl;
    Student student1("John Doe", 21);
    student1.introduce();

    return 0;
}