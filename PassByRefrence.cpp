#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Program Created By Divy"<< endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}