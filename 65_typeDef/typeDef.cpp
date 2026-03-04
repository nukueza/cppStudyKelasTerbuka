#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char *argv[]) {
  
  typedef int I ;
  typedef int iVector2D[2];
  typedef unsigned long ulong;
  typedef long long dlong;

  using num = double;
  using tlong = long long;
  using rlong = unsigned long;

  I a, b;
  I sum = a + b;

  iVector2D vec = { 2, 3 };

  cout << "a + b = " << sum << endl;

  cout << "vec: " << vec[0] << " dan " << vec[1] << endl;

  return 0;
}
