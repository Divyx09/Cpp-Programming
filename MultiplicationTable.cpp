#include <iostream>
using namespace std;

int main()
{
    string z;
    cout<<"Enter Your Name: ";
    cin>>z;
    cout << "Enter a Number to print the multiplication Table: ";
    int input;
    cin >> input;
    for (int i = 1; i < 11; i++)
    {
        cout << input << " X " << i << " = " << input * i << "\n";
    }

    return 0;
}