#include <iostream>
using namespace std;
class MyClass
{
public:
    void myMethod()
    {
        cout << "Hello World!";
    }
};

int main()
{
    cout << "Program Created By Divy"<< endl;
    MyClass myObj;
    myObj.myMethod();
    return 0;
}