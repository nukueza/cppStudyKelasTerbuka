#ifndef __WEAPON
#define __WEAPON

#include <string>
using std::string;

class Weapon{
private:
  string name;
  double attckPower;

public:
  Weapon(const char* name, double attckPower);
  void display();
  string getName();
};

#endif // !__WEAPON
