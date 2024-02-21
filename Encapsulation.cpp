#include <iostream>
using namespace std;
class temp
{
    int a;
    int b;

public:
    int solve(int input)
    {
        a = input;
        b = a / 2;
        return b;
    }
};

int main()
{
    cout << "Program Created By Divy"<< endl;
    int n;
    cin >> n;
    temp obj;
    int ans = obj.solve(n);
    cout << ans << endl;
}
