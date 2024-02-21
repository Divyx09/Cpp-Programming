#include <iostream>
using namespace std;
int factorial(int n);

int main()
{
    cout << "Program Created By Divy" << endl;
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    cout << "Program Created By Divy" << endl;
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
