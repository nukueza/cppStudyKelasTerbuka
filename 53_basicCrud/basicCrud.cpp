#include <iostream>
#include <fstream> // ofstream, ifstream, fstream
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {
  // ofstream
  std::ofstream myFile;

  // ios::out = ooutput operation, ios::app = writing at the end of line, 
  // ios::trunc = creating a file and create new file
  //
  myFile.open("data3.txt", std::ios::app); // append
  myFile << "writing at data3" << endl;
  myFile.close();

  myFile.open("data1.txt", std::ios::out);
  myFile << "Writing a data" << endl;
  myFile.close();

  myFile.open("data2.txt", std::ios::trunc);
  myFile << "Writing a data" << endl;
  myFile.close();

  return 0;
}
