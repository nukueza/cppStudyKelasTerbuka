#include <iostream>

// the namespace below are global scope
using std::cout;
using std::endl;


int x = 5;

int takeNum()
{
  return x;
}

void testing(int x);

int main (int argc, char *argv[]) {

  // global variable
  cout << x << endl; // output 5
  cout << takeNum() << endl; // output 5

  // this is local scope
  int x = 8;
  cout << x << endl; // output 8
  testing(x); // output 8

  cout << takeNum() << endl; // output 5
  {
    int x = 7;
    cout << x << endl;
  }

  cout << x << endl;

  return 0;
}

void testing(int x)
{
  cout << x << endl;
}
