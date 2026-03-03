#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::fstream;
using std::cout;
using std::endl;

struct Student {
  int NIM;
  char name[30];
  char field[30];
};

Student getFile(int pos, fstream &myFile);
void writeFile(Student &data, fstream &myFile);
void writeByPos(int pos, Student &buffer, fstream &myFile);

int main (int argc, char *argv[]) {
  fstream myFile;

  myFile.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);

  Student stud1, stud2, stud3, output;

  stud1.NIM = 123;
  strcpy_s(stud1.name, sizeof(stud1.name), "Goku");
  strcpy_s(stud1.field, sizeof(stud1.field), "Mesin");
  

  stud2.NIM = 124;
  strcpy_s(stud2.name, sizeof(stud2.name), "Gohan");
  strcpy_s(stud2.field, sizeof(stud2.field), "Automotive");

  stud3.NIM = 125;
  strcpy_s(stud3.name, sizeof(stud3.name), "Vegeta");
  strcpy_s(stud3.field, sizeof(stud3.field), "Civil");

  writeFile(stud1, myFile);
  writeFile(stud2, myFile);
  writeFile(stud3, myFile);

  strcpy_s(stud2.name, sizeof(stud2.name), "johny");
  writeByPos(2, stud2, myFile);

  output = getFile(2, myFile);

  cout << output.NIM << endl;
  cout << output.name << endl;
  cout << output.field << endl;

  myFile.close();
  
  return 0;
}

Student getFile(int pos, fstream &myFile)
{
  Student buffer;

  // cout << sizeof(Student) << endl;
  // 0-------72--------|-------72------|-------72------|
  myFile.seekg((pos - 1) * sizeof(Student));

  myFile.read(reinterpret_cast<char*>(&buffer), sizeof(Student));

  return buffer;
}

void writeFile(Student &data, fstream &myFile)
{
  myFile.write(reinterpret_cast<char*>(&data), sizeof(Student));
}

void writeByPos(int pos, Student &buffer, fstream &myFile)
{
  myFile.seekp((pos - 1) * sizeof(Student));

  myFile.write(reinterpret_cast<char*>(&buffer), sizeof(Student));
}
