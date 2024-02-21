#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;

    void speak()
    {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};
class Dog : public Animal
{
public:
    string breed;

    void bark()
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    cout << "Program Created By Divy" << endl;
    Dog myDog;
    myDog.name = "Sparky";
    myDog.age = 3;
    myDog.breed = "Labrador Retriever";

    myDog.speak();
    myDog.bark();

    return 0;
}