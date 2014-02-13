#include <iostream>
#include "stringer.h"

class Employee
{
private:
  String itsFirstName;
  String itsLastName;
  String itsAdress;
  long itsSalary;
  
public:
  Employee();
  Employee(char *, char *, char *, long);
  ~Employee();
  Employee(const Employee&);
  Employee& operator= (const Employee&);
  
  const String& GetFirstName() const {return itsFirstName;}
  const String& GetLastName() const {return itsLastName;}
  const String& GetAdress() const {return itsAdress;}
  long GetSalary() const {return itsSalary;}
  
  void SetFirstName(const String &name) {itsFirstName = name;}
  void SetLastName(const String &sername) {itsLastName = sername;}
  void SetAdress(const String &adress) {itsAdress = adress;}
  void SetSalary(long salary) {itsSalary = salary;}
};