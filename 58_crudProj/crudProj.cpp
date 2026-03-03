#include <ios>
#include <iostream>
#include <fstream>
#include <iterator>
#include <limits>

using std::cout;
using std::endl;
using std::fstream;

struct Mahasiswa {
  int pk;
  char NIM[20];
  char Name[30];
  char Jurusan[30];
};

void Display(int &input);
void getInput(fstream &data);
void checkDatabase(fstream &data);
void addDataMahasiswa(fstream &data);
void writeData(fstream &data, int pos, Mahasiswa &inputMahasiswa);
int getDataSize(fstream &data);
Mahasiswa readData(fstream &data, int pos);
void displayDataMahasiswa(fstream &data);
void updateRecord(fstream &data);
void deleteRecord(fstream &data);

int main (int argc, char *argv[]) {
  fstream data;

  checkDatabase(data);

  getInput(data);

  data.close();

  return 0;
}

enum opt { Adding = 1, Displaying, Rewrite, Deleted, Quit };

void deleteRecord(fstream &data)
{
  // 1. pilih no
  // 2. di isi dengan data kosong
  // 3. kita cek data yang ada dari file data.bin,
  // kalau ada data pindahkan ke data temp.
  // 4. kita pindahkan data dari file temp. ke data.bin

  int number, size, offset;
  Mahasiswa blankMahasiswa = {0}, tempMahasiswa;
  fstream tempData;
  size = getDataSize(data);

  cout << "Hapus Nomor: "; std::cin >> number;

  // validation
  if (number < 1 || number > size)
  {
    cout << "Nomor tidak valid!" << endl;
    return;
  }

  writeData(data, number, blankMahasiswa);

  tempData.open("temp.dat", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);

  offset = 0;

  for (int i = 1; i <= size; i++)
  {
    tempMahasiswa = readData(data, i);
    if (tempMahasiswa.Name[0] != '\0')
      writeData(tempData, i - offset, tempMahasiswa);
    else{
      offset++;
      cout << "Record di nomor " << i << "di hapus" << endl;
    }
  }

  // resync data bin
  int tempSize = getDataSize(tempData);
  data.close();
  data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
  for (int i = 1; i <= tempSize; i++)
  {
    tempMahasiswa = readData(tempData, i);
    writeData(data, i, tempMahasiswa);
  }

  tempData.close();
}

void updateRecord(fstream &data)
{
  int number;
  Mahasiswa updateMahasiswa;
  cout << "Pilih no: "; std::cin >> number;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  updateMahasiswa = readData(data, number);

  cout << "\n\nPilihan data: " << endl;
  cout << "NIM: " << updateMahasiswa.NIM << endl;
  cout << "Name: " << updateMahasiswa.Name << endl;
  cout << "Jurusan: " << updateMahasiswa.Jurusan << endl;

  cout << "\nMerubah data: " << endl;
  cout << "Nim: "; std::cin.getline(updateMahasiswa.NIM, 20);
  cout << "Nama: "; std::cin.getline(updateMahasiswa.Name, 30);
  cout << "Jurusan: "; std::cin.getline(updateMahasiswa.Jurusan, 30);

  writeData(data, number, updateMahasiswa);
}

void displayDataMahasiswa(fstream &data)
{
  int size = getDataSize(data);
  Mahasiswa showMahasiswa;
  cout << "no.\tpk.\tNim.\tNama.\tJurusan." << endl;
  for (int i = 1; i <= size; i++)
  {
    showMahasiswa = readData(data, i);
    cout << i << "\t";
    cout <<showMahasiswa.pk << "\t";
    cout <<showMahasiswa.NIM << "\t";
    cout <<showMahasiswa.Name << "\t";
    cout <<showMahasiswa.Jurusan << endl;
  }
}

Mahasiswa readData(fstream &data, int pos)
{
  Mahasiswa readMahasiswa;
  data.seekg((pos - 1) * sizeof(Mahasiswa), std::ios::beg);
  data.read(reinterpret_cast<char*>(&readMahasiswa), sizeof(Mahasiswa));
  return readMahasiswa;
}

int getDataSize(fstream &data)
{
  data.clear();
  int start, end;
  data.seekg(0, std::ios::beg);
  start = data.tellg();
  data.seekg(0, std::ios::end);
  end = data.tellg();
  return (end - start) / sizeof(Mahasiswa);
}

void writeData(fstream &data, int pos, Mahasiswa &inputMahasiswa)
{
  data.seekp((pos - 1) * sizeof(Mahasiswa), std::ios::beg);
  data.write(reinterpret_cast<char*>(&inputMahasiswa), sizeof(Mahasiswa));
  data.flush();
}

void addDataMahasiswa(fstream &data)
{
  Mahasiswa inputMahasiswa, lastMahasiswa;
  int size = getDataSize(data);

  cout << "ukuran data: "<< size << endl;

  if (size == 0)
  {
    inputMahasiswa.pk = 1;
  }
  else {
    lastMahasiswa = readData(data, size);
    cout << "pk = " << lastMahasiswa.pk << endl;
    inputMahasiswa.pk = lastMahasiswa.pk + 1;
  }

  cout << "Nama: ";
  std::cin.getline(inputMahasiswa.Name, 30);

  cout << "Jurusan: ";
  std::cin.getline(inputMahasiswa.Jurusan, 30);

  cout << "NIM: ";
  std::cin.getline(inputMahasiswa.NIM, 20);

  writeData(data, size + 1, inputMahasiswa);

}

void checkDatabase(fstream &data)
{
  data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);
  if (data.is_open())
  {
    cout << "database ditemukan" << endl;
  }
  else {
    cout << "database tidak ditemukan, buat database baru" << endl;
    data.close();
    data.open("data.bin",std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
  }
}

void Display(int &input)
{
  cout << "Program CRUD data Mahasiswa" << endl;
  cout << "=============================" << endl;
  cout << "1. Tambah data mahasiswa" << endl;
  cout << "2. Tampilkan data mahasiswa" << endl;
  cout << "3. Ubah data mahasiswa" << endl;
  cout << "4. Hapus data mahasiswa" << endl;
  cout << "5. Selesai" << endl;
  cout << "=============================" << endl;
  cout << "pilih 1 - 5: "; std::cin >> input; 
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  cout << endl;
}

void getInput(fstream &data)
{
  int input;
  char cont;

  while(input != Quit){
    Display(input);

    // safety check
    if (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      cout << "Please enter a number!" << endl;
      continue;
    }

    switch (input) {
      case Adding:
        cout << "Menambah data mahasiswa" << endl << endl;
        addDataMahasiswa(data);
        break;
      case Displaying:
        cout << "Tampilkan data mahasiswa" << endl << endl;
        displayDataMahasiswa(data);
        break;
      case Rewrite:
        cout << "Ubah data mahasiswa" << endl << endl;
        displayDataMahasiswa(data);
        updateRecord(data);
        displayDataMahasiswa(data);
        break;
      case Deleted:
        cout << "Hapus data mahasiswa" << endl << endl;
        displayDataMahasiswa(data);
        deleteRecord(data);
        displayDataMahasiswa(data);
        break;
      case Quit:
        cout << "exiting the program..." << endl;
        return; // exit to main and goes to return 0;
      default:
        cout << "wrong input try again" << endl;
        break;
    }

    while(true)
    {
      cout << "lanjutkan (y/n): "; std::cin >> cont;
      if (cont == 'y' || cont == 'Y') break;
      else if (cont == 'n' || cont == 'N') return;
      cout << "input y atau n saja!" << endl;
    }
  }
}

