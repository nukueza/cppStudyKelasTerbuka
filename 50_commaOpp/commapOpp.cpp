#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void displayData(int n)
{
  cout << n << endl;
}

int main (int argc, char *argv[]) {
  int a, b, c;

  a = ( b = 1, displayData(b) , c = 2, displayData(c), (b + c));

  cout << a << endl;
  
  return 0;
}
