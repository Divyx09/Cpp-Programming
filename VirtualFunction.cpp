#include <iostream>
using namespace std;

class VirtualFunctionParent
{
public:
    virtual void print()
    {
        cout << "parent vitual Function" << endl;
    }
};

class VirtualFunctionChild : public VirtualFunctionParent
{
public:
    void print()
    {
        cout << "child function" << endl;
    }
};

int main()
{
    VirtualFunctionChild vfc;
    VirtualFunctionParent *vfp;
    vfp=new VirtualFunctionParent;  
    vfp->print();
    vfp=&vfc;
    vfp->print();
    return 0;
}