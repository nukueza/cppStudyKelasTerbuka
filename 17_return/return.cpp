#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Add(int a, int b)
{
  int sum = a + b;
  return sum;
}

int main (int argc, char *argv[]) {

  int x, y;
  cout << "pass a num x: "; cin >> x;
  cout << "pass a num y: "; cin >> y;

  cout << x << " + " << y << " = " << Add(x, y) << endl;
  
  return 0;
}
