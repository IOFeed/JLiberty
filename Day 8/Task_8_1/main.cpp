#include <iostream>
#include "main.h"

Person::Person()
{
  yourAge = 0;
}

void Person::setAge(short unsigned int pAge)
{
  yourAge = pAge;
  std::cout << "Person age was set to: " << yourAge << "\n";
}

void Person::showAge() const
{
  std::cout << "Person age is: " << yourAge << "\n";
}
