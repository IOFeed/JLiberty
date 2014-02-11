#include <iostream>

using std::cout;
using std::cin;

class Cat
{
private:
  int itsAge;
public:
  static int HowManyCats;
  Cat(int age);
  virtual ~Cat();
  virtual int GetAge() {return itsAge;}
  virtual void SetAge(int age) {itsAge = age;}
  void Show() const;
};

Cat::Cat(int age):itsAge(age)
{
  cout << "Cat constructor...\n";
  HowManyCats++;
}

Cat::~Cat()
{
  cout << "Cat destructor...\n";
  HowManyCats--;
}

void Cat::Show() const
{
  cout << "Cats age: " << itsAge;
}

int Cat::HowManyCats = 0;

int main()
{
  const int MaxCats = 5;
  int i;
  Cat *CatHouse[MaxCats];
  
  for (i = 0; i < MaxCats; i++)
    CatHouse[i] = new Cat(i);
  
  for (i = 0; i < MaxCats; i++)
  {
    cout << "There now " << Cat::HowManyCats << " Cats in the house;\n";
    cout << "Deleting the Cat that is " << CatHouse[i]->GetAge(); 
    cout << " years old;\n";
    delete CatHouse[i];
    CatHouse[i] = 0;
  }
  cin.get();
  return 0;
}