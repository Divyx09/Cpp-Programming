#include <iostream>
using namespace std;

class Employee
{
public:
    Employee()
    {
        cout << "Default constructor called" << endl;
    }
};

int main()
{
    cout << "Program Created By Divy"<< endl;
    Employee e1;
    return 0;
}