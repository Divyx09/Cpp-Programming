#include<iostream>
using namespace std;

class ClassStudent
{
public:
   int id = 101;
   string name ="Divy";
};

int main()
{
    cout << "Program Created By Divy"<< endl;
    ClassStudent CS;
    cout<<CS.id<<endl;
    cout<<CS.name;
  return 0;
}
