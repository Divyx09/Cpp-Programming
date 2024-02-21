#include <iostream>
using namespace std;

int sum(int x, int y, int z = 0, int w = 0)
{
    return x + y + z + w;
}
int main()
{
    string z;
    cout << "Enter Your Name: ";
    cin >> z;
    cout << sum(10, 20)<<"\n";
    cout << sum(10, 20, 30)<<"\n";
    cout << sum(10, 20, 30, 40)<<"\n";
    return 0;
}