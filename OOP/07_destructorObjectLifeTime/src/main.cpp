#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Player{
public:
  string name;

  // constructor
  Player(const char* name)
    : name(name){
    cout << "player " << name << " dibuat" << endl;
  }

  // destructor
  ~Player(){
    cout << "player " << name << " dihapus" << endl;
  }
};

void membuatPlayerStack(){
  Player stackPlayer = Player("Stack");
}

void membuatHeapPlayer(){
  Player* heapPlayer = new Player("Heap");
  delete heapPlayer;
}

void membuatPlayerStackPointer(Player* &playerPointer){
  Player stackPlayer = Player("stack");
  // playerPointer = &stackPlayer; // dangling pointer
} // stackPlayer are destroy here;

void membuatPlayerHeapPointer(Player* &playerPointer){
  Player* heapPlayer = new Player("heap");
  playerPointer = heapPlayer; // jangan passing object ke pointer
  // delete heapPlayer;// disini ga langsung di delete masih bisa akses di luar
}

Player createStackPlayer(){
  Player stackPlayer1 = Player("Stack Player1");
  return stackPlayer1;
}

Player* createHeapPlayer(){
  Player* heapPlayer1 = new Player("Heap Player1");
  return heapPlayer1;
}


int main (int argc, char *argv[]) {
  membuatPlayerStack();
  membuatHeapPlayer();

  cout << "\nMemory leak" << endl;
  Player* playerPointer1;
  membuatPlayerStackPointer(playerPointer1);

  //cout << (*playerPointer1).name << endl; // empty because the pointer are pointing to something else in &stackPlayer

  Player* playerPointer2;
  membuatPlayerHeapPointer(playerPointer2);
  cout << playerPointer2->name << endl; //leak memory
  playerPointer2->name = "goku";
  cout << playerPointer2->name << endl; // leak memory, it still show the name
  delete playerPointer2; // object succefully deleted
  // cout << playerPointer2->name << endl; // this should be error but it return 0(exit) so the playerPointer name wont show;

  cout << "\nReturn Obj" << endl;

  Player playerReturnStack = createStackPlayer();
  cout << playerReturnStack.name << endl;// ga bisa deleted langsung harus sampai end -> } 

  Player* playerReturnHeap = createHeapPlayer();
  cout << playerReturnHeap->name << endl;
  delete playerReturnHeap; // bisa langsung di delete

  return 0;
}
