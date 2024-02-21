#include <iostream>
using namespace std;

void add()
{
  int a, b, c;
  cout << "Enter First Number: ";
  cin >> a;
  cout << "Enter Second Number: ";
  cin >> b;
  c = a + b;
  cout << c;
}

int main()
{
  string z;
  cout << "Enter Your Name: ";
  cin >> z;
  add();
  return 0;
}