#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (int argc, char *argv[]) {

  int num1 = 5, num2 = 10;
  
  // create a pointer, point to num1
  int *p1 = &num1; // explicit referencing
  *p1 = 2; // re-assign value / explicit dereferencing
  
  cout << *p1 << endl;
  cout << &num1 << endl;
  cout << p1 << endl;
  cout << &p1 << endl; // address pointer itself

  p1 = &num2; // re-assign to another address

  // create a reference (alias) to num1
  int &refNum1 = num1; // implicit referencing
  refNum1 = 7; // implicit dereferencing
  
  cout << refNum1 << endl;
  cout << &num1 << endl;
  cout << &refNum1 << endl;

  // refNum1 = &num2; -> this thing will error coz reference cannot be re-assigned

  refNum1 = num2; // refnum1 is sitll an alias to num1.

  num2 = 20;
  cout << refNum1 << endl;
  cout << num1 << endl;
  cout << num2 << endl;
  cout << &num2 << endl;
  cout << &num1 << endl;

  return 0;
}
