// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// class Teacher
// {
// public:
//     string name;
//     Teacher(string name)
//     {
//         this->name = name;
//     }
// };

// class Department
// {
// public:
//     vector<Teacher *> teachers;

//     void addTeacher(Teacher *t)
//     {
//         teachers.push_back(t);
//     }

//     void print()
//     {
//         cout << "Department has the following teachers:\n";
//         for (auto t : teachers)
//         {
//             cout << t->name << endl;
//         }
//     }
// };

// int main()
// {
//     Teacher t1("Mr. Smith");
//     Teacher t2("Mrs. Johnson");

//     Department d;
//     d.addTeacher(&t1);
//     d.addTeacher(&t2);

//     d.print();

//     return 0;
// }

#include <iostream>
using namespace std;
class Address
{
public:
    string addressLine, city, state;

    Address(string addressLine, string city, string state)

    {

        this->addressLine = addressLine;

        this->city = city;
        this->state = state;
    }
};
class Employee

{
private:
    Address *address; // Employee HAS-A Address
public:
    int id;
    string name;

    Employee(int id, string name, Address *address)

    {

        this->id = id;
        this->name = name;

        this->address = address;
    }

    void display()

    {

        cout << id << " " << name << " " <<

            address->addressLine << " " << address->city << " " << address->state << endl;
    }
};

int main()
{

    Address a1 = Address("C-146, Sec-15", "Noida", "UP");
    Employee e1 = Employee(101, "Nakul", &a1);
    e1.display();
    return 0;
}