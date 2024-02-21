#include <iostream>
using namespace std;

void myfunc(int a, int b)
{
    cout << "The sum of the two numbers is: " << a + b << endl;
}

void myfunc(double a, double b)
{
    cout << "The sum of the two numbers is: " << a + b << endl;
}

int main()
{
    cout << "Program Created By Divy" << endl;
    myfunc(10, 20);
    myfunc(3.14, 2.71);
    return 0;
}