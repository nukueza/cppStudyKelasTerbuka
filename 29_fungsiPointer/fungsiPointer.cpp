#include <iostream>

using std::cout;
using std::endl;

void fungsi(int *);
void square(int *);

int main (int argc, char *argv[]) {

  int a = 5;
  cout << "address a: " << &a << endl;
  cout << "nilai a: " << a << endl;

  // fungsi(&a);
  square(&a);
  cout << a << endl;
  return 0;
}

void fungsi(int *b)
{
  cout << "address b: " << b << endl;
  cout << "nilai b: " << *b << endl; // dereferencing
}

void square(int *valPtr)
{
  *valPtr = *valPtr * *valPtr;
}
