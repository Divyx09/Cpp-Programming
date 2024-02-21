#include<iostream>
using namespace std;
class Animal
{
public:
    void makeSound()
    {
        cout << "I am an animal." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Woof woof!" << endl;
    }
};

class Poodle : public Dog
{
public:
    void beg()
    {
        cout << "I want a treat!" << endl;
    }
};

int main()
{
    cout << "Program Created By Divy" << endl;
    Poodle poodle;
    poodle.makeSound();
    poodle.bark();
    poodle.beg();
    return 0;
}