#include <iostream>

using std::cout;
using std::endl;

int factorial(int x);

int main (int argc, char *argv[]) {
  cout << factorial(5) << endl;
  return 0;
}

int factorial(int x)
{
  if (x <= 1)
  {
    cout << x << " = ";
    return x;
  }
  else
  {
    cout << x << " * ";
    return x * factorial(x - 1);
  }
}
