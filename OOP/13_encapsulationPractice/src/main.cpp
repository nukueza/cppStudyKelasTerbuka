// #include <iostream>
#include <string>
#include "Player.h"
#include "Weapon.h"

// using std::cout;
// using std::endl;
using std::string;

int main (int argc, char *argv[]) {
  
  Player* player1 = new Player("Johny", 100);
  Weapon* weapon1 = new Weapon("Senapan", 50);

  // implementasi setter untuk menggunakan senjata
  player1->equipWeapon(weapon1);

  player1->display();

  delete player1;
  delete weapon1;
  player1 = nullptr;
  weapon1 = nullptr;

  return 0;
}
