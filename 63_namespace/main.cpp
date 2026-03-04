#include <iostream>
#include "otong.h"

using std::cout;
using std::endl;

using otong::b;

void fungsi();

int main (int argc, char *argv[]) {
  fungsi();

  cout << b << endl;
  otong::fungsi();
  otong::cout(5);
  
  return 0;
}

void fungsi()
{
  cout << "ini adalah fungsi biasa" << endl;
}
