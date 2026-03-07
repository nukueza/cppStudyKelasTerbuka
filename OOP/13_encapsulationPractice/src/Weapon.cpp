#include <iostream>
#include "Weapon.h"

Weapon::Weapon(const char* name, double attckPower){
  this->name = name;
  this->attckPower = attckPower;
}

void Weapon::display(){
  std::cout << "Weapon: " << this->name << std::endl;
  std::cout << "Power Damage: " << this->attckPower << std::endl;
}

string Weapon::getName(){
  return this->name;
}

