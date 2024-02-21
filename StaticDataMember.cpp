#include <iostream>
using namespace std;
class A
{
public:
    static int x;

};
int A :: x = 10;
int main()
{
    cout << "Program Created By Divy"<< endl;
    cout<<A::x;
    return 0;
}
