#include <iostream>
#include <string>
#include "Player.h"

using std::cout;
using std::endl;
using std::string;


Player::Player(const char* name){
  this->name = name;
  this->level = 1;
  this->exp = 0;
  this->attackPower = 100;
}

// getter, akan membuat attribute readonly
const string& Player::getName(){
  return this->name;
}

// setter, untuk write data ke class
void Player::addExp(int expVal){
  int maxExp = 100;
  cout << "Mendapatkan exp: " << expVal << endl;
  this->exp += expVal;
  if (this->exp >= maxExp){
    this->level++;
    this->attackPower += 100;
    cout << "LEVEL UP" << endl;
    this->exp = 0;
  }
}

void Player::display(){
  cout << "Name\t :" << this->name << endl;
  cout << "Level\t :" << this->level << "\nExp\t :" << this->exp << endl; 
  cout << "Attack\t :" << this->attackPower << endl;
}

