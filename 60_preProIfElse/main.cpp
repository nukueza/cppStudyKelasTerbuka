#include <iostream>

#define ID 0

#if ID == 1
  #define LANG "Indonesia"
#else 
  #define LANG "English"
#endif


using std::cout;
using std::endl;

int main (int argc, char *argv[]) {
  
  cout << "bahasa dipilih: " << LANG << endl;
  return 0;
}
