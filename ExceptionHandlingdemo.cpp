#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    x=5;
    y=5;
    z=10;
    float R;
    try
    {
        if ((x - y) == 0)
        {
            throw "Division by zero";
        }
        else
        {
            R = z / (x - y);
            cout<<R;
        }
    }
    catch (const char *e)
    {
        cout<<e;;
    }
    catch (...)
    {
        cout<<"Error Caught";;
    }

    return 0;
}