#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Polos{
public:
  string dataString;
  int dataInteger;
};

// class dengan constructor
class Mahasiswa{
public:
  string nama;
  string NIM;
  string jurusan;
  double IPK;

  // Mahasiswa(){
  //   cout << "ini adalah constructor" << endl;
  // }

  // constructor with parameter
  Mahasiswa(string inputNama, string NIM, string jurusan, double IPK){
    Mahasiswa::nama = inputNama;
    Mahasiswa::NIM = NIM;
    Mahasiswa::jurusan = jurusan;
    Mahasiswa::IPK = IPK;

    cout << "Nama: " << Mahasiswa::nama << endl;
    cout << "NIM: " << Mahasiswa::NIM << endl;
    cout << "Jurusan: " << Mahasiswa::jurusan << endl;
    cout << "IPK: " << Mahasiswa::IPK << endl;

  }
};

int main (int argc, char *argv[]) {

  Mahasiswa Mahasiswa1 = Mahasiswa("Ucup", "123214", "mesin", 4.0);
  cout << endl;
  Mahasiswa Mahasiswa2 = Mahasiswa("Otong", "53284", "Civil", 3.8);


  // cout << "Nama: " << Mahasiswa2.nama << endl;
  // cout << "NIM: " << Mahasiswa2.NIM << endl;
  // cout << "Jurusan: " << Mahasiswa2.jurusan << endl;
  // cout << "IPK: " << Mahasiswa2.IPK << endl;


  // Polos objectPolos;
  // objectPolos.dataString = "polos";
  // objectPolos.dataInteger = 5;
  //
  // cout << objectPolos.dataString << endl;
  // cout << objectPolos.dataInteger << endl;

  return 0;
}
