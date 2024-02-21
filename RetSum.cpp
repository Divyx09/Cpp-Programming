#include <iostream>
using namespace std;

class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};
int main()
{
    string z;
    cout << "Enter Your Name: ";
    cin >> z;
    int a = 47;
    int b = 45;
    Addition obj;
    cout << obj.add(a, b);
    return 0;
}