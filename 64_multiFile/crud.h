#include <iostream>
#include <fstream>

using std::fstream;
using std::cout;
using std::endl;

namespace crud {
struct Mahasiswa {
  int pk;
  char NIM[20];
  char Name[30];
  char Jurusan[30];
};

enum opt { Adding = 1, Displaying, Rewrite, Deleted, Quit };

void Display(int &input);
void getInput(fstream &data);
void checkDatabase(fstream &data);
void addDataMahasiswa(fstream &data);
void writeData(fstream &data, int pos, Mahasiswa &inputMahasiswa);
int getDataSize(fstream &data);
Mahasiswa readData(fstream &data, int pos);
void displayDataMahasiswa(fstream &data);
void updateRecord(fstream &data);
void deleteRecord(fstream &data);

}


