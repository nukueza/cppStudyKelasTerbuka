#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Mahasiswa{
public:
  string nama;
  double IPK;

  Mahasiswa(string nama, double IPK) {
    Mahasiswa::nama = nama;
    Mahasiswa::IPK = IPK;
  }

  void displayData()
  {
    cout << "nama: " << nama << endl;
    cout << "IPK: " << IPK << endl;
  }

  void ubahNama(const char *nama){
    Mahasiswa::nama = nama;
  }

  string getNama(){
    return nama;
  }

  double getIPK(){
    return IPK;
  }

  double katrolIPK(const double &tambahanNilai){
    return Mahasiswa::IPK + tambahanNilai;
  }

};


int main (int argc, char *argv[]) {

  Mahasiswa mahasiswa1 = Mahasiswa("ucup", 3.0);
  Mahasiswa mahasiswa2 = Mahasiswa("otong", 2.5);

  mahasiswa1.displayData();
  cout << endl;
  mahasiswa2.displayData();

  cout << endl;

  mahasiswa1.ubahNama("Johny");
  mahasiswa1.displayData();

  cout << endl;

  string dataNama = mahasiswa1.getNama();
  cout << "data nama: "<< dataNama << endl;
  cout << "data IPK: "<< mahasiswa1.getIPK() << endl;
  cout << "nilai katrol: " << mahasiswa1.katrolIPK(1) << endl;
  
  return 0;
}
