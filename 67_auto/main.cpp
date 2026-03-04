#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<typename T, typename U>
auto max(T a, U b)
{
  return (a > b) ? a : b;
}

int main (int argc, char *argv[]) {

  auto a = 15;
  auto b = "test";
  double c = 15.2341;
  float d = 12.45f;
  double e = max(a, d);

  cout << a << "\ttipe: " << typeid(a).name() << endl;
  cout << b << "\ttipe: " << typeid(b).name() << endl;
  cout << c << "\ttipe: " << typeid(c).name() << endl;
  cout << d << "\ttipe: " << typeid(d).name() << endl;
  cout << e << "\ttipe: " << typeid(e).name() << endl;
  
  return 0;
}
