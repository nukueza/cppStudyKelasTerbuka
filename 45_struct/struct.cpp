#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Fruits{
  string color;
  float weight;
  int price;
  string flavour;
};

int main (int argc, char *argv[]) {

  Fruits apple;
  apple.color = "red";
  apple.weight = 15.0;
  apple.price = 15000;
  apple.flavour = "sweet";

  Fruits orange;
  orange.color = "orange";
  orange.weight = 5.0;
  orange.price = 1000;
  orange.flavour = "sour";

  cout << apple.color << endl;
  cout << apple.weight << endl;
  cout << apple.price << endl;
  cout << apple.flavour << endl;
  cout << &apple << endl;

  cout << endl;

  cout << orange.color << endl;
  cout << orange.weight << endl;
  cout << orange.price << endl;
  cout << orange.flavour << endl;
  cout << &orange << endl;

  
  return 0;
}
