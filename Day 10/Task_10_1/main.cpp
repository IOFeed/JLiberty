#include <iostream>

using std::cout;
using std::cin;

class Circle
{
private:
  int *itsRadius = new int;
public:
  Circle() {*itsRadius = 5;}
  Circle(int r);
  Circle(const Circle &);
  ~Circle();
  void setRadius(int &r) {*itsRadius = r;}
  void showRadius() const;
  void operator++ () {++*itsRadius;}
  void operator++ (int x);
};

void Circle::showRadius() const
{
  cout << "Radius: " << *itsRadius << "\n";
}

Circle::~Circle()
{
  cout << "Destructor \n";
  delete itsRadius;
}
/*
Circle::Circle(Circle& C)
{
  itsRadius = new int;
}*/

Circle::Circle(const Circle& c)
{
  itsRadius = new int;
  *itsRadius = *(c.itsRadius);
}



Circle::Circle(int r)
{
  *itsRadius = r;
}


int main()
{
  Circle Best;
  Best.showRadius();
  Circle Good(50);
  Good.showRadius();
  int newRadius = 12;
  Good.setRadius(newRadius);
  Good.showRadius();
  ++Good;
  Good.showRadius();
  cin.get();
  return 0;
}