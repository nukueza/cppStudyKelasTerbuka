#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int main (int argc, char *argv[]) {

  char y;
  while(true)
  {
    cout << "draw the dice? (y/n): "; cin >> y;

    if (y == 'y')
      cout << 1 + (rand() % 6) << endl;
    else if (y == 'n')
      break;
    else
    {
      cout << "input y and n" << endl;
    }
  }
  
  return 0;
}
