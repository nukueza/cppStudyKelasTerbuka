#include <iostream>
#include <string>
#include "Player.h"

using std::cout;
using std::endl;
using std::string;


int main (int argc, char *argv[]) {

  Player* player1 = new Player("johny");

  player1->display();

  cout << "get Name: " << player1->getName() << endl;
  player1->setName("Vegeta");
  player1->display();
  cout << "class ini di file terpisah" << endl;

  player1->setName("Kuroko");
  player1->display();

  delete player1;
  player1 = nullptr;
  
  return 0;
}


