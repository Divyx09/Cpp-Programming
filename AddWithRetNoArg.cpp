#include <iostream>
using namespace std;

int add()
{
  int a, b;
  cout << "Enter First Number: ";
  cin >> a;
  cout << "Enter Second Number: ";
  cin >> b;
  return a + b;
}

int main()
{
  string z;
  cout << "Enter Your Name: ";
  cin >> z;
  cout << add();
  return 0;
}