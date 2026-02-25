#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// worker
void Player(string input)
{
  cout <<"Welcome " << input << endl;
}

int main (int argc, char *argv[]) {

  string name;
  cout << "What is your name: "; cin >> name;
  Player(name);
  
  return 0;
}
