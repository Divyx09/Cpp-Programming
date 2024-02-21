#include <iostream>
#include <string>
using namespace std;

void add(int a, int b)
{
  int c = a + b;
  cout << c;
}
int main()
{
  string z;
  cout << "Enter Your Name: ";
  cin >> z;
  int a, b;
  cout << "Enter First Number: ";
  cin >> a;
  cout << "Enter Second Number: ";
  cin >> b;
  add(a, b);
  return 0;
}