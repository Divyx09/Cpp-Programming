#include<iostream>
using namespace std;

class Example
{
private:
    int a;
    int b;

public:
    Example();

    void printValues();
};
Example::Example()
{
    a = 10;
    b = 20;
}

void Example::printValues()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    cout << "Program Created By Divy"<< endl;
    Example obj;
    obj.printValues();

    return 0;
}