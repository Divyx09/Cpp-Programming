#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating Flesh";
    }
};
int main()
{
    string z;
    cout << "Enter Your Name: ";
    cin >> z;
    Animal lion;
    lion.eat();
    return 0;
}