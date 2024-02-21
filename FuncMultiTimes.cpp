#include <iostream>
using namespace std;
class Calculate
{
public:
    int a, b;

public:
    void input()
    {
        cout << "Enter Your First Number: ";
        cin >> a;
        cout << "Enter Your Second Number: ";
        cin >> b;
    }
};
int main()
{
    string z;
    cout << "Enter Your Name: ";
    cin >> z;
    Calculate o;
    o.input();
    int c = o.a + o.b;
    cout << "Sum = " << c << endl;
    o.input();
    int d = o.a - o.b;
    cout << "Difference = " << d << endl;
    o.input();
    int e = o.a * o.b;
    cout << "Product = " << e << endl;
    return 0;
}
