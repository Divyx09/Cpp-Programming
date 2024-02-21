#include <iostream>
using namespace std;

class Animal
{
public:
    void makeSound()
    {
        cout << "Woof!" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Bark!" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    cout << "Program Created By Divy" << endl;
    Dog d;
    Cat c;
    d.makeSound();
    d.bark();
    c.makeSound();
    c.meow();
    return 0;
}