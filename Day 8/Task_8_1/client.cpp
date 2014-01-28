#include <iostream>
#include "main.h"

int main ()
{
  using std::cout;
  using std::cin;
  Person GoMan;
  short int someAge;
  short int *pAge = &someAge;
  *pAge = 25;
  GoMan.setAge(*pAge);
  GoMan.showAge();
  
  cin.get();
  return(0);
  
}
