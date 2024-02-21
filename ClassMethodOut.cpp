#include <iostream>
using namespace std;

class myclass
{
public:
    void mymethod();
};

void myclass::mymethod()
{
    cout << "Hi how are you today?";
}

int main()
{
    cout << "Program Created By Divy"<< endl;
    myclass myobject;
    myobject.mymethod();
    return 0;
}