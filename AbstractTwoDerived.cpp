#include <iostream>
using namespace std;
class Shape
{
public:
  virtual void draw() = 0;
};

class Square : public Shape
{
public:
  void draw() override
  {
    cout << "Drawing a square" << endl;
  }
};

class Circle : public Shape
{
public:
  void draw() override
  {
    cout << "Drawing a circle" << endl;
  }
};

int main()
{
  Square square;
  Circle circle;
  square.draw();
  circle.draw();

  return 0;
}