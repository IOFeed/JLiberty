#include <iostream>


  using std::cout;
  using std::cin;
  
  class SimpleCat
  {
  public:
    SimpleCat();
    SimpleCat(SimpleCat&);
    ~SimpleCat();
    
    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }
  private:
    int itsAge;
  };
  
SimpleCat::SimpleCat()
{
  cout << "SimpleCat constructor" << "\n";
  itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat& )
{
  cout << "SimpleCat copy constructor" << "\n";
}

SimpleCat::~SimpleCat()
{
  cout << "SimpleCat destructor" << "\n";
}

const SimpleCat & FunctionTwo (const SimpleCat & theCat);

int main()
{ 
  cout << "Making cat!" << "\n";
  SimpleCat Frisky;
  cout << "Cat age: " << Frisky.GetAge() << " yars" << "\n";
  int age = 5;
  Frisky.SetAge(age);
  FunctionTwo(Frisky);
  cout << "Cat age: " << Frisky.GetAge() << " yars" << "\n";
  
  cin.get();
  return(0);
}

const SimpleCat & FunctionTwo (const SimpleCat & theCat)
{
  cout << "FunctionTwo" << "\n";
  cout << "Cat age now is: " << theCat.GetAge() << " yars" << "\n";
  return theCat;
}

