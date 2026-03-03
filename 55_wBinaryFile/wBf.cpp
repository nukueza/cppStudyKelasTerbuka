#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {

  std::fstream myFile;
  int num = 35;

  myFile.open("data.bin", std::ios::out | std::ios::binary);

  myFile.write(reinterpret_cast<char*>(&num), sizeof(num));

  myFile.close();
  return 0;
}
