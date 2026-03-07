#include <iostream>
#include <string>
#include "Mahasiswa.h"

using std::cout;
using std::endl;
using std::string;

Mahasiswa::Mahasiswa(const char* name){
  this->namePublic = name;
  this->namePrivate = name;
}

void Mahasiswa::showDisplay(){
  cout << "name: " << namePrivate << endl; 
}

