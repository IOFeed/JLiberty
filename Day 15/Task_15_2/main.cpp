#include <iostream>

using std::cout;
using std::cin;

void Square (int&, int&);
void Cube (int&, int&);
void Swap (int&, int&);
void GetVals (int&, int&);
typedef void (*VPF) (int&, int&);
void PrintVals (VPF, int&, int&);

int main()
{
  int valOne = 1, valTwo = 2;
  int choice;
  bool Quit = false;
  
  VPF pFunc;
  
  while (Quit == false)
  {
    cout << "(0)Quit (1)Change values (2)Square (3)Cube (4)Swap\n";
    cin >> choice;
    switch (choice)
    {
      case 1: pFunc = GetVals; break;
      case 2: pFunc = Square; break;
      case 3: pFunc = Cube; break;
      case 4: pFunc = Swap; break;
      default: Quit = true; break;
    }
    
    if (Quit == false)
      PrintVals (pFunc, valOne, valTwo);
  }
  
  cin.get();
  return 0;
}

void PrintVals(VPF pFunc, int& x, int& y)
{
  cout << "x: " << x << " y: " << y << "\n";
  pFunc(x,y);
  cout << "x: " << x << " y: " << y << "\n";
}

void Square(int& x, int& y)
{
  x *= x;
  y *= y;
}

void Cube(int& x, int& y)
{
  int temp;
  
  temp = x;
  x *= x;
  x = x * temp;
  
  temp = y;
  y *= y;
  y = y * temp;
}

void Swap(int& x, int& y)
{
  int Temp;
  Temp = x;
  x = y;
  y = Temp;
}

void GetVals(int& rValOne, int& rValTwo)
{
  cout << "New value for ValOne is: ";
  cin >> rValOne;
  cout << "New value for ValTwo is: ";
  cin >> rValTwo;
}



