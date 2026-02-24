#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::endl;
  using std::cin;

  int a;

  cout << "input a number: ";
  cin >> a;

  switch (a) {
    case 2:
      cout << "a equal to 2" << endl;
      break;
    case 5:
      cout << "a equal to 5" << endl;
      break;
    default:
      cout << "number not found" << endl;
      break;
  }

  return 0;
}
