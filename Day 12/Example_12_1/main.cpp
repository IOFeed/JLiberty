#include <iostream>

using std::cout;
using std::cin;

class Mammal
{
protected:
  int itsAge;
  
public:
  Mammal():itsAge(1) {cout << "Mammal constructor...\n";}
  virtual ~Mammal() {cout << "Mammal destructor...\n";}
  void move() const {cout << "Mammal move one step.\n";}
  virtual void speak() const {cout << "Mammal sound.\n";}
};

class Dog : public Mammal
{
public:
  Dog() {cout << "Dog constructor...\n";}
  virtual ~Dog() {cout << "Dog destructor...\n";}
  void tail() {cout << "Wagging tail.\n";}
  void move() const {cout << "Dog move one step.\n";}
  void speak() const {cout << "Wouf!\n";}
};

int main()
{
  Mammal *pDog = new Dog;
  pDog->move();
  pDog->speak();
  //pDog->tail();
  cout << "--------------\n";
  Mammal *super =  new Dog;
  super->speak();
  super->move();
  cin.get();
  return 0;
}