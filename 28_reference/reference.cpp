#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char *argv[]) {

  int a = 5;

  cout << "address dari a: " << &a << endl;
  cout << "nilai dari a: " << a << endl;

  // reference
  int &b = a;
  cout << "nilai dari b: " << b << endl;
  cout << "address dari b: " << &b << endl;

  b = 10;

  cout << "nilai dari a: " << a << endl;
  cout << "address dari b: " << b << endl;


  return 0;
}
