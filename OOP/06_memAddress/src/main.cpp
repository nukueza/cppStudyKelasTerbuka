#include <ctime>
#include <iostream>
#include <string>
#include <chrono>

using std::cout;
using std::endl;
using std::string;
using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Kosong{
public:
  int data(){
    return 1;
  }
};

class Isi{
public:
  int dataInt; // 4 byte
  int dataInt2; // 4 byte
  double dataDouble; // 8 byte
  string dataStr;

  void setDataInt(int data){
    dataInt = data;
  }

};

class Mahasiswa{
public:
  string Name;
  string NIM;

  Mahasiswa(const char* name, const char* nim)
    : Name(name), NIM(nim){}

  string getName()
    const { return Name; }

  void setName(string newName){
    if (!newName.empty())
      Name = newName;
  }

  void Show(){
    cout << "Name: " << Name << endl;
    cout << "NIM: " << NIM << endl;
  }
  
};

int main (int argc, char *argv[]) {

  Mahasiswa* mahasiswa = new Mahasiswa("Udin", "51678123");
  mahasiswa->Show();

  mahasiswa->setName("Otong Surotong");

  cout << "\nUpdated Info: " << endl;
  string name = mahasiswa->getName();
  cout << name << endl;
  mahasiswa->Show();

  cout << "Size of Mahasiswa object: " << sizeof(Mahasiswa) << " bytes" << endl;
  cout << endl;

  cout << "Address on heap: " << mahasiswa << endl;
  cout << endl;

  cout << "memory used by name: " << mahasiswa->Name.capacity() << " bytes" << endl;

  cout << endl;

  // menampilkan memory
  cout << "Alokasi class kosong adalah: " << sizeof(Kosong) << " byte" << endl;
  cout << "Alokasi class Isi adalah: " << sizeof(Isi) << " byte" << endl;

  cout << endl;

  // address
  string a, b, c, d;
  cout << "address stack:" << endl;
  cout << &a << endl;
  cout << &b << endl;
  cout << "stack address (pointer): "<< &mahasiswa << endl; // address pointer, since the pointer variable itself lives on the stack
  cout << "heap address (object): " <<  mahasiswa << endl; // heap
  cout << &c << endl;
  cout << &d << endl;

  // seberapa cepat kita membuat object di masing-masing memory
  TimePoint *tStactStart = new TimePoint();
  TimePoint *tStactEnd = new TimePoint();
  TimePoint *tHeapStart = new TimePoint();
  TimePoint *tHeapEnd = new TimePoint();

  std::cin.get();

  *tStactStart = Clock::now();
  Mahasiswa object1 = Mahasiswa("Jony", "123");
  *tStactEnd = Clock::now();

  *tHeapStart = Clock::now();
  Mahasiswa* object2 = new Mahasiswa("Goku", "321");
  *tHeapEnd = Clock::now();

  std::chrono::duration<double> durasi = *tStactEnd - *tStactStart;
  cout << "Waktu pembuatan object1 di stack: " << durasi.count() << endl;

  cout << endl;
  durasi = *tHeapEnd - *tHeapStart;
  cout << "Waktu pembuatan object2 di heap: " << durasi.count() << endl;

  // object created in stack always fast than heap;


  delete mahasiswa;
  delete object2;
  delete tStactStart;
  delete tStactEnd;
  delete tHeapStart;
  delete tHeapEnd;
  mahasiswa = nullptr;
  object2 = nullptr;
  return 0;
}
