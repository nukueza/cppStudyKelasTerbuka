#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {
  std::fstream myFile;
  int result;
  myFile.open("data.bin", std::ios::in | std::ios::binary);

  myFile.read(reinterpret_cast<char*>(&result), sizeof(result));

  //cout << "data type of int: " << sizeof(result) << endl;
  cout << "content data: " << result << endl;
  myFile.close();

  return 0;
}

// std::fstream myFile;
//   int num = 125;
//
//   myFile.open("data.bin", std::ios::out | std::ios::binary);
//
//   myFile.write(reinterpret_cast<char*>(&num), sizeof(num));
//
//   myFile.close();

