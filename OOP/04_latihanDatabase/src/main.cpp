#include <ios>
#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::fstream;

class Mahasiswa{
public:
  string nama;
  string NIM;
  string jurusan;

  Mahasiswa(string nama, string NIM, string jurusan){
    Mahasiswa::nama = nama;
    Mahasiswa::NIM = NIM;
    Mahasiswa::jurusan = jurusan;
  }

  string getString(){
    return nama + " " + NIM + " " + jurusan;
  }
};

class DBase{
public:
  std::ifstream in;
  std::ofstream out;
  string fileName;

  DBase(const char* fileName){
    DBase::fileName = fileName;
  }

  void save(Mahasiswa data){
    cout << data.nama << endl;
    cout << data.NIM << endl;
    cout << data.jurusan << endl;

    DBase::out.open(DBase::fileName, std::ios::app);

    if (out.is_open()){
      out << data.getString() << endl;
      out.close();
    }else {
      std::cerr << "Error: could not open file!" << std::endl;
    }
  }

  void showAll(){
    DBase::in.open(DBase::fileName, std::ios::in);
    string nama, NIM, jurusan;
    int index = 1;

    while(!DBase::in.eof()){
      DBase::in >> nama;
      DBase::in >> NIM;
      DBase::in >> jurusan;
      cout << index++ << "." << nama << "\t" << NIM << "\t" << jurusan << endl;
    }
    DBase::in.close();

  }
};

int main (int argc, char *argv[]) {

  DBase dataBase = DBase("data.txt");
  // tampilkan seluruh data
  dataBase.showAll();

  string nama, NIM, jurusan;

  cout << "Masukkan data mahasiswa" << endl;
  cout << "Nama: "; std::cin >> nama;
  cout << "NIM: "; std::cin >> NIM;
  cout << "Jurusan: "; std::cin >> jurusan;

  Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);

  // save data ke database
  dataBase.save(dataMahasiswa);

    
  return 0;
}
