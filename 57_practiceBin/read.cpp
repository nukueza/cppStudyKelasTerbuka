#include <iostream>
#include <fstream>
#include <iterator>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::fstream;

struct Student {
  int NIM;
  string name;
  string field;
};

Student getFile(int pos, fstream &myFile);

int main (int argc, char *argv[]) {

  fstream myFile; 
  Student dataRead;
  int pos = 2;

  myFile.open("data.bin", std::ios::in | std::ios::binary);

  dataRead = getFile(pos, myFile); 

  cout << dataRead.NIM << endl;
  cout << dataRead.name << endl;
  cout << dataRead.field << endl;

  myFile.close();
  
  return 0;
}


Student getFile(int pos, fstream &myFile)
{
  Student buffer;

  // cout << sizeof(Student) << endl;
  // 0-------72--------|-------72------|-------72------|
  myFile.seekp((pos - 1) * sizeof(Student));

  myFile.read(reinterpret_cast<char*>(&buffer), sizeof(Student));

  return buffer;

  // cout << buffer.NIM << endl;
  // cout << buffer.name << endl;
  // cout << buffer.field << endl;
}
