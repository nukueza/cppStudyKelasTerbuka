#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::endl;

  // increment and decrement
  // preincrement and postincrement

  int a = 5;
  int b = 5;

  // postincrement
  cout << a << endl;
  cout << a++ << endl;
  cout << a << endl << endl;

  // preincrement
  cout << b << endl;
  cout << ++b << endl;
  cout << b << endl;

  return 0;
}
