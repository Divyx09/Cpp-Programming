#include <iostream>
using namespace std;

int add(int a, int b)
{
  return a + b;
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
  cout << add(a, b);
  return 0;
}