#include <iostream>
using namespace std;

int main()
{
  string z;
  cout << "Enter Your Name: ";
  cin >> z;
  int a, b;
  cout << "Enter value for 'a': ";
  cin >> a;
  cout << "Enter value for 'b': ";
  cin >> b;
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "Value of 'a': " << a << "\n";
  cout << "Value of 'B': " << b;

  return 0;
}