// pre-processing directive
#include <iostream>

//macro pre-processing is literal data
#define PI 3.14159265 // it won't place in mem
#define BAHASA "indonesia"

// inline func
#define SQUARE(X) (X*X)
#define MAX(A, B) ((A > B) ? A:B)

using std::cout;
using std::endl;

int main (int argc, char *argv[]) {

  // double PI = 3.14159265 // it will place on memory
  
  cout << "nilai PI: " << PI << endl; // you don't have to write bunch of pi
  cout << "bahasa: " << BAHASA << endl;
  cout << "Square: " << SQUARE(5) << endl;
  cout << "max: " << MAX(5, 4) << endl;

  #undef BAHASA
  #define BAHASA "inggris"
  cout << BAHASA << endl;
  return 0;
}
