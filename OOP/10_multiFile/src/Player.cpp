#include <iostream>
#include "Player.h"

using std::cout;
using std::endl;
// Penjabaran metod
Player::Player(const char* name){
  this->name = name;
}

void Player::display(){
  cout << "Name: " << this->name << endl;
}

string Player::getName(){
  return this->name;
}

void Player::setName(const char* name){
  this->name = name;
}
