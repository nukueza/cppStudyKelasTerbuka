#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char *argv[]) {
  int a = 5;

  // pointer
  int *aPtr = nullptr;
  aPtr = &a;

  cout << "nilai dari a: " << a << endl; 
  cout << "address of a: " << aPtr << endl;

  a = 10;

  // dereferencing, having data of pointer
  cout << "have a pointer value from aPtr: " << *aPtr << endl;

  return 0;
}
