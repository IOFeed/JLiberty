#include <iostream>

using std::cout;
using std::cin;

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
protected:
  int itsAge;
  int itsWeight;
  
public:
  Mammal():itsAge(2), itsWeight(5){}
  ~Mammal(){}
  
  int GetAge() const {return itsAge;}
  void SetAge(int age) {itsAge = age;}
  int GetWeight(int weight) {itsWeight = weight;}
  void SetWeight(int weight) {itsWeight = weight;}
  
  void Speak() const {cout << "Mammal sound \n";}
  void Sleap() const {cout << "zzzz \n";}  
};

class Dog : public Mammal
{
private:
  BREED itsBreed;
  
public:
  Dog():itsBreed(GOLDEN){}
  ~Dog(){}
  
  BREED GetBreed() const {return itsBreed;}
  void SetBreed(BREED breed) {itsBreed = breed;}
  
  void WagTail() const {cout << "Tail wagging...\n";}
  void BegForFood() const {cout << "Begging for food...\n";}
};

int main ()
{
  Dog SuperDog;
  SuperDog.Speak();
  SuperDog.WagTail();
  cout << "Fido is " << SuperDog.GetAge() << "yars old\n";
  cin.get();
  return 0;
}