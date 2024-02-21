// #include <iostream>
// using namespace std;

// class OperatorOverloading
// {
//     int a;
//     int c;
//     int b;

// public:
//     OperatorOverloading()
//     {
//         cout << "ENTER THE VALUE OF A" << endl;
//         cin >> a;
//         cout << "ENTER THE VALUE OF B" << endl;
//         cin >> b;
//         cout << "ENTER THE VALUE OF C" << endl;
//         cin >> c;
//     }
//     void operator++()
//     {
//         a = a + 1;
//         b = b + 1;
//         c = c + 1;
//     }
//     void operator--(){
//         a=a-1;
//         b=b-1;
//         c=c-1;
//     }
//     void Disp()
//     {
//         cout << "Incremented Values are " << a << " , " << b << " and " << c;
//     }
//     void Disp1()
//     {
//         cout << "Decremented Values are " << a << " , " << b << " and " << c;
//     }
// };

// int main()
// {
//     OperatorOverloading oo;
//     ++oo;
//     oo.Disp();
//     --oo;
//     // oo++;
//     oo.Disp1();
// }

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;
    int c;

    A()
    {
        cout << "ENTER THE VALUE OF A: ";
        cin >> a;
        cout << "ENTER THE VALUE OF B: ";
        cin >> b;
        cout << "ENTER THE VALUE OF C: ";
        cin >> c;
    }
    void operator++()
    {
        a = a + 1;
        b = b + 1;
        c = c + 1;
    }
    void disp()
    {
        cout << "Incremented values are " << a << "," << b << " and " << c;
    }
};

int main()
{
    A n;
    ++n;
    n.disp();
    return 0;
}