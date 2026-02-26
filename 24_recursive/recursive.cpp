#include <iostream>

using std::cout;
using std::endl;

// iteration
int pow(int a, int b);

// recursive
int powRecursive(int a, int b)
{
  if (b <= 1)
  {
    cout << "end of recursion" << endl;
    return a;
  }
  else {
    return a * powRecursive(a, b - 1);
  }
}

int main (int argc, char *argv[]) {
  cout << pow(3, 2) << endl;
  cout << powRecursive(3, 2) << endl;
  return 0;
}

int pow(int a, int b)
{
  int result = a;
  for (int i = 0; i < b - 1; i++)
  {
    result = result * a;
  }

  return result;
}
