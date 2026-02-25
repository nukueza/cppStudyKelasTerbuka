#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Player(string name); // prototype

int main (int argc, char *argv[]) {

  string name;
  cout << "What is your name: "; cin >> name;
  Player(name);
  
  return 0;
}

void Player(string name)
{
  cout << "Hello " << name << endl;
}
