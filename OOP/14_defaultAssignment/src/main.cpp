#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Hero{
private:
  string name;
  double health;

public:
  Hero(const char* name = "Player", double health = 125.0){
    this->name = name;
    this->health = health;
  }

  void display(){
    cout << "Player name: " << this->name << endl;
    cout << "Health: " << this->health << endl;
  }
};

int main (int argc, char *argv[]) {
  
  Hero* hero1 = new Hero("Johny", 100);
  hero1->display();

  Hero hero2 = Hero();
  hero2.display();

  Hero* hero3 = new Hero("Otong");
  hero3->display();

  delete hero1;
  delete hero3;
  hero1 = nullptr;
  hero3 = nullptr;

  return 0;
}
