#include <iostream>
#include "string.h"

using std::cout;
using std::cin;
using namespace std;

class String
{
private:
  String (unsigned short);
  char * itsString;
  unsigned short itsLen;
public:
  String();
  String(const char *const);
  String(const String &);
  ~String();
  
  char & operator[] (unsigned short offset);
  char operator[] (unsigned short offset) const;
  String operator+ (const String&);
  void operator+= (const String&);
  String & operator= (const String&);
  
  unsigned short GetLen() const {return itsLen;}
  const char * GetString() const {return itsString;}
};

String::String()
{
  itsString = new char[1];
  itsString[0] = '\0';
  itsLen = 0;
}

String::String(short unsigned int len)
{
  itsString = new char[len+1];
  for (unsigned short i = 0; i < itsLen; i++)
    itsString[i] = '\0';
  itsLen = len;
}

String::String(const char*const cString)
{
  itsLen = strLen(cString);
  itsString = new char[itsLen+1];
  for (unsigned short i =1 0; i < itsLen; i++)
    itsString[i] = cString[i];
  itsString[itsLen] = '\0';
}

String::String(const String& copy)
{
  cout << "Copy constructor\n";
  itsLen = copy.GetLen();
  itsString = new char[itsLen+1];
  for (unsigned short i = 0; i < itsLen; i++)
    itsString[i] = copy[i];
  itsString[itsLen] = '\0';
}

String::~String()
{
  delete [] itsString;
  itsLen = 0;
}

int main()
{
  cin.get();
  return 0;
}
