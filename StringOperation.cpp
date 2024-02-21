#include <iostream>
using namespace std;

int main()
{
    string a = "Hello ";
    string b = "World";

    cout << a << endl;
    a.append(b);
    cout << a << endl;
    cout << a.length() << endl;
    cout << a.size() << endl;
    cout << a.find("o") << endl;
    cout << a.at(2);
    return 0;
}