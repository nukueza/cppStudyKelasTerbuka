#include <iostream>
#include <string>
#include "Player.h"

using std::string;
using std::cout;
using std::endl;


int main (int argc, char *argv[]) {
  Player player1 = Player("Narto");

  // getter in action
  cout << player1.getName() << endl;

  player1.display();
  // player1.name = "sasuke"; // it won't do coz name is private

  cout << endl;

  Player* hero = new Player("Kuro");
  cout << hero->getName() << endl;

  hero->display();
  cout << endl;

  cout << "bertarung" << endl;
  hero->addExp(25);
  hero->addExp(25);
  hero->addExp(25);
  hero->addExp(25);
  hero->addExp(25);

  cout << endl;
  hero->display();

  delete hero;
  hero = nullptr;
  
  return 0;
}
