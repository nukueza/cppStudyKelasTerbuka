#ifndef __PLAYER
#define __PLAYER

#include <string>
#include "Weapon.h"

using std::string;

class Player{
private:
  string name;
  int health;
  Weapon* weapon;

public:
  Player(const char* name, int health);
  void display();

  // setter
  void equipWeapon(Weapon*);

  void healthPlayer();
};

#endif
