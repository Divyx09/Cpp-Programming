#include <iostream>
using namespace std;

class EncapsulationPrac
{
private:
    int age;
    void show()
    {
        cout << "Welcome";
    }

public:
    string name;

    void setValue(int a)
    {
        age = a;
        show();
        cout << endl
             << age;
    }
};
int main()
{
    EncapsulationPrac E;
    E.name = "deep";
    E.setValue(19);
    cout << endl
         << E.name;

    return 0;
}
