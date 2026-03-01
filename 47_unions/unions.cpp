#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

union MyUnion {
  int a;
  char b[4];
};

int main (int argc, char *argv[]) {

  MyUnion data;
  data.a = 12345742;

  data.b[0] = 'a';
  data.b[1] = 'b';
  data.b[2]= 'c';
  data.b[3] = 'd';

  cout << "data a: " << sizeof(data.a) << " value: " << data.a << endl;
  cout << "data b: " << sizeof(data.b) << " value: " << data.b << endl;

  

  return 0;
}
