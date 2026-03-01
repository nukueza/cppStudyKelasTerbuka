#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

enum Merah { merah, kuning, hijau = 4, biru };

int main (int argc, char *argv[]) {

  Merah cotton;

  cotton = kuning;

  if (cotton == kuning)
    cout << "warna testing" << endl;
  
  return 0;
}
