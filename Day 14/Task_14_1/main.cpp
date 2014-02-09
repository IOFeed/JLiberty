#include <iostream>

using std::cout;
using std::cin;

class Vehicle //Base class
{
protected:
  int itsSpeed;
public:
  Vehicle():itsSpeed(0) {cout << "Base class constructor...\n";}
  virtual ~Vehicle(){}
  void SetSpeed (int speed) {itsSpeed = speed;}
  void Speed() const {cout << "Base class function\n" << "Vhicle speed: " << itsSpeed << "\n";}
  virtual void Move() = 0;
};

class Airplane : virtual public Vehicle
{
protected:
  int itsAltitude;
public:
  Airplane():itsAltitude(100),Vehicle() {cout << "Airplane constructor...\n";}
  void Move() {cout << "Flies\n";}
  void SetAltitude (int altitude) {itsAltitude = altitude;}
  void Altitude () const {cout << "Max altitude: " << itsAltitude << "\n";}
};

class Rocket : virtual public Vehicle
{
protected:
  int itsJetPower;
public:
  Rocket():itsJetPower(200),Vehicle() {cout << "Rocket constructor...\n";}
  void Move() {cout << "Bzzzz BUM\n";}
  void SetJetPower (int JetPower) {itsJetPower = JetPower;}
  void JetPower() const {cout << "Jet Power is: " << itsJetPower << "\n";}
};

class JetPlane : public Rocket, public Airplane
{
public:
  void Move() {cout << "Flies like Bzzzz\n";}
  JetPlane() {cout << "JetPlane constructor...\n";}
  void show();
};

void JetPlane::show()
{
  cout << "Speed: "; this->Speed();
  cout << "Altitude: "; this->Altitude();
  cout << "JetPower: "; this->JetPower();
}


int main() 
{
  JetPlane Seven47;
  Seven47.show();
  cin.get();
  return 0;
}