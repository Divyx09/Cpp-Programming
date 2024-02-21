#include <iostream>
using namespace std;

void display(int rollNO, string name, int zipcode)
{
  cout << "Roll Number: " << rollNO << "\n";
  cout << "Name: " << name << "\n";
  cout << "Zipcode: " << zipcode << "\n";
  cout << "---------------------------------\n";
}
int main()
{
  string z;
  cout << "Enter Your Name";
  cin >> z;
  display(101, "Jhon", 789003);
  display(102, "Ortan", 145009);
  display(103, "Flexies", 681003);
  return 0;
}