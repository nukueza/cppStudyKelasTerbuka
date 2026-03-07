#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Hero {
private:
  string name;
public:
  Hero(const char* name){
    this->name = name;
  }

  void setName(const char* name){
    this->name = name;
  }

  string getName() const {
    return this->name;
  }

  void display() const {
    cout << "Name: " << this->name << endl;
  }

};

int main (int argc, char *argv[]) {

  Hero* hero1 = new Hero("Otong");
  hero1->display();

  const Hero hero2 = Hero("Johny");
  hero2.display();
  hero1->setName("Kuro");
  hero1->display();

  hero2.getName();

  delete hero1;
  hero1 = nullptr;
  
  return 0;
}
