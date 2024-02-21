#include <iostream> 
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    cout << "Program Created By Divy" << endl;
    Person p1 = Person("John Doe", 30);
    p1.displayInfo();

    return 0;
}