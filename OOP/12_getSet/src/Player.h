#ifndef __PLAYER
#define __PLAYER

#include <string>

using std::string;

class Player{
private:
  string name;
  double attackPower;
  int level;
  int exp;
public:
  Player(const char* name);
  const string &getName();
  void addExp(int expVal);
  void display();
};
#endif // !__PLAYER
