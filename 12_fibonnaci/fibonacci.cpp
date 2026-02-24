#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void printFibonacci(int n)
{
  int fn1 = 1, fn2 = 0, fn;

  for (int i = 0; i < n; i++)
  {
    cout << fn2 << ", ";

    fn = fn1 + fn2;
    fn2 = fn1;
    fn1 = fn;
  }
}

int main (int argc, char *argv[]) {
  
  int n;
  int fn;
  int fn1;
  int fn2;

  cout << "fibonacci programming" << endl;
  cout << "masukkan nilai ke-n: "; cin >> n;

  fn1 = 1;
  fn2 = 0;
  fn = fn1 + fn2;
  cout << fn << ", ";

  for (int i = 1; i < n; i++)
  {
    fn = fn1 + fn2;
    fn2 = fn1;
    fn1 = fn;
    cout << fn << ", ";
  }
  cout << "\n";

  cout << "fibonacci series up to " << n << " terms: ";
  printFibonacci(n);

  return 0;
}


