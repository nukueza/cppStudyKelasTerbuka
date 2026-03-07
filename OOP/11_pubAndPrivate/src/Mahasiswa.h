#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Mahasiswa{
// attributes
public: // ini dapat di akses oleh siapapun
  string namePublic;

private: // ini hanya dapat diakses oleh class mahasiswa
  string namePrivate;

//method dan constructor
public:
  Mahasiswa(const char* name);
   
  void showDisplay();
    
};

#endif
