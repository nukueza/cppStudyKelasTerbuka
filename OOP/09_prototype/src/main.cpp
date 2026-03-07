#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// deklarasi class
class Player{
public:
  string name;

  Player(const char*); // dalam bentuk prototype

  void display();

  string getName();

  void setName(const char*);
};

int main (int argc, char *argv[]) {

  Player* player1 = new Player("johny");

  player1->display();

  cout << "get Name: " << player1->getName() << endl;
  player1->setName("Vegeta");
  player1->display();

  delete player1;
  player1 = nullptr;
  
  return 0;
}

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
