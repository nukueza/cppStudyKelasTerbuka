#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


class Mahasiswa
{
  public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;
};


int main (int argc, char *argv[]) {

  cout << "pengenalan class dan object" << endl;

  Mahasiswa data1;
  data1.nama = "ucup";
  data1.NIM = "123";
  data1.jurusan = "Mesin";
  data1.IPK = 3.00;

  Mahasiswa data2;
  data2.nama = "Otong";
  data2.NIM = "324";
  data2.jurusan = "Civil";
  data2.IPK = 4.00;

  cout << endl;

  cout << "nama dari data1: " << data1.nama << endl;
  cout << "NIM dari data1: " << data1.NIM << endl;
  cout << "Jurusan dari data1: " << data1.jurusan << endl;
  cout << "IPK dari data1: " << data1.IPK << endl;

  cout << endl;

  cout << "nama dari data2: " << data2.nama << endl;
  cout << "NIM dari data2: " << data2.NIM << endl;
  cout << "Jurusan dari data2: " << data2.jurusan << endl;
  cout << "IPK dari data2: " << data2.IPK << endl;
  
  return 0;
}
