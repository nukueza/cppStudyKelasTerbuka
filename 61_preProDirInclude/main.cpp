#include <iostream>
#include "library.h"
#include "thingpi.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[]) {
  MyClass mc;

  // call the func
  mc.do_something();

  if (true)
    cout << "test passed" << endl;
  else
    cout << "test failed" << endl;

  cout << endl;
  
  cout << PI << endl;
  
  return 0;
} 

void MyClass::do_something()
{
  cout << "doing something" << endl;
}
