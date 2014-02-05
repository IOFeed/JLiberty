#include <iostream>
#include <cstring>

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
  itsLen = strlen(cString);
  itsString = new char[itsLen+1];
  for (unsigned short i = 0; i < itsLen; i++)
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

String& String::operator=(const String& str)
{
  if (this == &str)
    return *this;
  delete [] itsString;
  itsLen = str.GetLen();
  itsString = new char[itsLen+1];
  for (unsigned short i = 0; i < itsLen; i++)
    itsString[i] = str[i];
  return *this;
}

char& String::operator[](short unsigned int offset)
{
  if (offset > itsLen)
    return itsString[itsLen-1];
  else
    return itsString[offset];
}

char String::operator[](short unsigned int offset) const
{
  if (offset > itsLen)
    return itsString[itsLen-1];
  else
    return itsString[offset];
}


String String::operator+(const String& str)
{
  unsigned short totalLen = itsLen + str.GetLen();
  String temp(totalLen);
  unsigned short i;
  for (i=0; i<itsLen; i++)
    temp[i] = itsString[i];
  for (unsigned short j=0; j<str.GetLen(); j++, i++)
    temp[i] = str[j];
  temp[totalLen] = '\0';
  return temp;
}

void String::operator+=(const String& str)
{
  unsigned short strLen = str.GetLen();
  unsigned short totalLen = itsLen + strLen;
  String temp(totalLen);
  unsigned short i;
  for (i=0; i<itsLen; i++)
    temp[i] = itsString[i];
  for (unsigned short j=0; j<str.GetLen(); j++, i++)
    temp[i] = str[i-itsLen];
  temp[totalLen] = '\0';
  *this = temp;
  
}


int main()
{
  String S1("Test string");
  cout << "S1:\t" << S1.GetString() << "\n";
  
  char * temp = "Hello World!";
  S1 = temp;
  cout << "S1:\t" << S1.GetString() << "\n";
  
  char temp2[20];
  strcpy(temp2,"Nice to be here!");
  
  cin.get();
  return 0;
}
