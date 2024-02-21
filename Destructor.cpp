#include <iostream>
using namespace std;

class MyClass
{
public:
    int a, b;

    MyClass() { cout << "Constructor called" << endl; }

    ~MyClass() { cout << "Destructor called" << endl; }
};

int main()
{
    cout << "Program Created By Divy"<< endl;
    MyClass obj;
    cout << "Object created" << endl;

    return 0;
}