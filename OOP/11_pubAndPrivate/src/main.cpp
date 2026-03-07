#include <iostream>
#include <string>
#include "Mahasiswa.h"

using std::cout;
using std::string;
using std::endl;

int main (int argc, char *argv[]) {

  Mahasiswa* mahasiswa1 = new Mahasiswa("ucup");

  cout << mahasiswa1->namePublic << endl;

  Mahasiswa* mahasiswa2 = new Mahasiswa("Otong");

  mahasiswa2->showDisplay();

  Mahasiswa* mahasiswa3 = new Mahasiswa("Dadang");
  mahasiswa3->showDisplay();

  return 0;
}
