#include <iostream>

using namespace std;

class Animal
{
public:
    void eat() { cout << "I am eating." << endl; }
};

class Cat : public Animal
{
public:
    void meow() { cout << "Meow!" << endl; }
};

class Dog : public Animal
{
public:
    void bark() { cout << "Woof!" << endl; }
};

class Hybrid : public Cat, public Dog
{
public:
    void purr() { cout << "Purr..." << endl; }
};

int main()
{
    cout << "Program Created By Divy"<< endl;
    Hybrid h;
    Dog d;
    d.eat();
    // h.eat();
    h.meow();
    h.bark();
    h.purr();
    return 0;
}
