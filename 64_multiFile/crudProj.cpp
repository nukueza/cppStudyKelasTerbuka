#include <fstream>
#include "crud.h"

using std::fstream;

void getInput(fstream &data);

int main (int argc, char *argv[]) {
  fstream data;

  crud::checkDatabase(data);

  crud::getInput(data);

  data.close();

  return 0;
}
