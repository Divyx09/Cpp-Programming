#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void inputa(){
        cin>>a;
    }
    friend void compare(A objA, B objB);

}; class B
{
    int b;
    public:
    void inputb(){
        cin>>b;
    }
    friend void compare(A objA, B objB);
};
void compare(A objA, B objB)
{
    if(objA.a>objB.b)
        cout<<"A";
    else
        cout<<"B";
}

int main()
{
    A Ob;
    B Obj;
    Ob.inputa();
    Obj.inputb();
    compare(Ob,Obj);
    return 0;
}