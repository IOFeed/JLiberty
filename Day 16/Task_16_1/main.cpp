#include <iostream>
#include <string.h>

using std::cout;
using std::cin;

class String
{
private:
  String(int);
  char *itsString;
  unsigned short itsLen;
  
public:
  String();
  String(const char *const);
  String(const String &);
  ~String();
  
  char &operator[](int offset);
  char operator[](int offset) const;
  String operator+(const String&);
  void operator+=(const String&);
  String& operator=(const String&);
  
  int GetLen() const {return itsLen;}
  const char* GetString() const {return itsString;}
  //static int ConstructorCount;
};

String::String()
{
  itsString = new char[1];
  itsString[0] = '\0';
  itsLen = 0;
}

String::String(int len)
{
  itsString = new char[len+1];
  for (int i = 0; i <= len; i++)
    itsString[i] = '\0';
  itsLen = len;
}

String::String(const char *const cString)
{
  itsLen = strlen(cString);
  itsString = new char[itsLen+1];
  for (int i = 0; i < itsLen; i++)
    itsString[i] = cString[i];
  itsString[itsLen] = '\0';
}

String::String(const String &rhs)
{
  itsLen = rhs.GetLen();
  itsString = new char[itsLen+1];
  for (int i = 0; i < itsLen; i++)
    itsString[i] = rhs[i];
  itsString[itsLen] = '\0';
}

String::~String()
{
  delete []itsString;
  itsLen = 0;
}

String& String::operator=(const String& rhs)
{
  if (this == &rhs)
    return *this;
  delete []itsString;
  itsLen = rhs.GetLen();
  itsString = new char[itsLen+1];
  for (int i = 0; i < itsLen; i++)
    itsString[i] = rhs[i];
  itsString[itsLen] = '\0';
  return *this;
}

char& String::operator[](int offset)
{
  if (offset > itsLen)
    return itsString[itsLen-1];
  else
    return itsString[offset];
}

char String::operator[](int offset) const
{
  if (offset > itsLen)
    return itsString[itsLen-1];
  else
    return itsString[offset];
}

String String::operator+(const String &rhs)
{
  int totalLen = itsLen + rhs.GetLen();
  String temp(totalLen);
  int i,j;
  for (i = 0; i < itsLen; i++)
    temp[i] = itsString[i];
  for (j = 0; j < rhs.GetLen(); j++,i++)
    temp[i] = rhs[j];
  temp[totalLen] = '\0';
  return temp;
}

void String::operator+=(const String &rhs)
{
  int totalLen = itsLen + rhs.GetLen();
  String temp(totalLen);
  int i,j;
  for (i = 0; i < itsLen; i++)
    temp[i] = itsString[i];
  for (j = 0; j < rhs.GetLen(); j++,i++)
    temp[i] = rhs[i-itsLen];
  temp[totalLen] = '\0';
  *this = temp;
}

