#ifndef MAIN_H_
#define MAIN_H_
#include <iostream>

class Person
{
private:
  unsigned short yourAge;
public:
  Person();
  void setAge(unsigned short int pAge);
  void showAge() const;
};
#endif
