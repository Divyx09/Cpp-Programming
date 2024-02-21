#include <iostream>
using namespace std;

int main()
{
  string z;
  cout << "Enter Your Name: ";
  cin >> z;
  int input;
  cout << "Enter a number to check if it is even or odd: ";
  cin >> input;
  if (input % 2 == 0)
  {
    cout << input << " is Even Number";
  }
  else
    cout << input << " is Odd Number";
  return 0;
}