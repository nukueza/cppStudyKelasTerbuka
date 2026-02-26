#include <iostream>

using std::cout;
using std::endl;

void square(int &value);
void fungsi(int &b);

int main (int argc, char *argv[]) {
  int a = 5;
  cout << "address a: " << &a << endl;
  cout << "nilai a: " << a << endl;

  square(a);
  cout << "nilai a: " << a << endl;

  return 0;
}

void fungsi(int &b){
  b = 10;
  cout << "address b: " << &b << endl;
  cout << "nilai b: " << b << endl;
}

void square(int &value)
{
  value = value * value;
}
