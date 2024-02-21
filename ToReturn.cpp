#include<iostream>
using namespace std;

int subtract(int a,int b){
    return a-b;
}
int main()
{
    int a,b;
    string z;
    cout << "Enter Your Name: ";
    cin >> z;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout<<subtract(a,b);    
  return 0;
}