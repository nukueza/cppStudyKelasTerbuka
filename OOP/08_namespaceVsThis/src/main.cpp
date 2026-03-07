#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


class Types{
public:
  string dataStr;
  double dataDouble;
  double m_dataDouble;

  Types(const char* dataStr, double dataDouble){
    // dengan menggunakan namespace dari class
    Types::dataStr = dataStr;

    // dengan menggunakan this
    cout << this << endl;
    this->dataDouble = dataDouble;

    // dengan menggunakan konvensi penamaan
    m_dataDouble = dataDouble;
  }
};

namespace otong{
  //member func
  class Player{
  public:
    string name;
    double power;
    int health;

    Player(const char* name, double power){
      Player::setName(name);
      this->setPower(power);
    }

    void setName(const char* name){
      this->name = name;
    }

    void setPower(double power){
      this->power = power;
    }

    void setHealht(int);

  };
}

void otong::Player::setHealht(int health){
  this->health = health;
}

int main (int argc, char *argv[]) {

  Types* object1 = new Types("object 1", 1.5);
  cout << object1->dataDouble << endl;
  cout << object1->dataStr << endl;

  otong::Player* player1 = new otong::Player("Goku", 100);
  cout << player1->name << endl;
  player1->setName("Vegeta");
  cout << player1->name << endl;
  player1->setHealht(10);
  cout << player1->health << endl;
  cout << player1->power << endl;

  delete object1;
  delete player1;
  player1 = nullptr;
  object1 = nullptr;

  player1->setPower(1000);
  cout << player1->power << endl;
  
  return 0;
}

