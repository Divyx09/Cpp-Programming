#include<iostream>
#include<string>

class Teacher {
public:
    std::string name;
    Teacher(std::string name) : name(name) {}
};

class Department {
public:
    Teacher teacher;

    Department(std::string teacherName) : teacher(teacherName) {}

    void print() {
        std::cout << "Department has the following teacher: " << teacher.name << std::endl;
    }
};

int main() {
    Department d("Mr. Smith");
    d.print();

    return 0;
}
