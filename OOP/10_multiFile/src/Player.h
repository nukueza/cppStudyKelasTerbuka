#ifndef __PLAYER
#define __PLAYER
#include <string>

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

#endif
