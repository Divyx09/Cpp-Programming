#include <iostream>
using namespace std;

class MethodOverloadingChangeNo
{
public:
    void print(int i)
    {
        cout << "Printing One Integer" << i << endl;
    }
    void print(int i, int z)
    {
        cout << "Printing Two Integer" << i << " " << z << endl;
    }
    void print(int i, int z, int w)
    {
        cout << "Printing Three Integer" << i << " " << z << " " << w;
    }
};

int main()
{
    MethodOverloadingChangeNo mo;
    mo.print(10);
    mo.print(10, 20);
    mo.print(10, 20, 30);
    return 0;
}