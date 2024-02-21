#include <iostream>
using namespace std;

class OverridingParent
{
public:
    void print()
    {
        cout << "Overriding Parent" << endl;
    }
};
class OverridingChild : OverridingParent
{
public:
    void print()
    {
        cout << "Overriding Child" << endl;
    }
};

int main()
{
    OverridingChild oc;
    oc.print();
    return 0;
}
