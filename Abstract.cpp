#include <iostream>

using namespace std;
class Animal
{
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal
{
public:
    void makeSound() override { cout << "Woof!" << endl; }
};

int main()
{
    cout << "Program Created By Divy" << endl;
    Animal *animal = new Dog();
    animal->makeSound();
    return 0;
}