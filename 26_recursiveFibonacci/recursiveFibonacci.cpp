// bad implement of recursive
#include <iostream>

using std::cout;
using std::endl;

int fibonacci(int n);

int main (int argc, char *argv[]) {
  cout << fibonacci(3) << endl;
  return 0;
}

int fibonacci(int n)
{
  cout << "fungsi fibonacci " << n << endl; 
  if (n == 0 || n == 1)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2) ;
}
