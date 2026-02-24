#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::cin;
  using std::endl;

  int a;
  int b;

  cout << "input num a: ";
  cin >> a;
  cout << "input numb b: ";
  cin >> b;

  if (a < b){
    cout << "a is less than b" << endl;
  }
  else if (a > b) {
    cout << "a is greater than b" << endl;
  }
  else {
    cout << "a is equal to b" << endl;
  }

  return 0;
}
