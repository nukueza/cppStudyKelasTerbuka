#include <iostream>
#include "Player.h"

Player::Player(const char* name, int health){
  this->name = name;
  this->health = health;
}

void Player::display(){
  std::cout << "Player Name: " << this->name << std::endl;
  std::cout << "Menggunakan senjata: " << this->weapon->getName() << std::endl;
  std::cout << "player health: " << this->health << std::endl;
}

void Player::equipWeapon(Weapon* weapon){
  this->weapon = weapon;
}

void Player::healthPlayer(){
  std::cout << "testing" << std::endl;
}


