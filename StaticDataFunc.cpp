#include <iostream>
using namespace std;

class A
{
private:
    static int X;
public:
    static void fun()
    {
        cout << "Value of X: " << X << endl;
    }
};
int A ::X = 10;

int main()
{
    cout << "Program Created By Divy"<< endl;
    A::fun();
   return 0;
}
