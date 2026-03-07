#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class DenganConstructor{
public:
  string data;

  DenganConstructor(const char* nama){
    DenganConstructor::data = nama;
  }

  void show(){
    cout << "ini dengan construtor: " << data << endl;
  }
};

class TanpaConstructor{
public:
  string data;

  void show(){
    cout << "ini tanpa construtor: " << data << endl;
  }
};

int main (int argc, char *argv[]) {

  TanpaConstructor object1;
  object1.data = "object 1";
  object1.show();

  DenganConstructor object2 = DenganConstructor("object 2");
  object2.show();

  DenganConstructor object3("object3");
  object3.show();

  // make objet in heap
  DenganConstructor* object4 = new DenganConstructor("object 4");
  // (*object4).show(); // dereference
  object4->show(); // arrow opr. mapping func.

  cout << object4->data << endl;

  // dengan constructor tidak bisa declare harus langsug initialize

  DenganConstructor* object5 = new DenganConstructor("object 5");
  object5->show();
  DenganConstructor* object6;
  object6 = new DenganConstructor("object 6");
  object6->show();
  
  return 0;
}
