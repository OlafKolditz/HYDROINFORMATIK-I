// Für DOS

#include <iostream>  // for using cout
#include <malloc.h>  // for using malloc_usable_size
using namespace std;

int main()
{
  //----------------------------------------------------------------
  cout << "EX08a Arrays: Memory allocation and release" << endl;
  cout << ".....................\n";
  //----------------------------------------------------------------
  // Definitions
  cout << "Speicherbedarf Zeiger\n";
  char* Zeichenkette;
  int* iVektor;
  double* dVektor;
  cout << "Zeichenkette:\t" << sizeof(Zeichenkette) << "\n";
  cout << "iVektor:\t" << sizeof(iVektor) << "\n";
  cout << "dVektor:\t" << sizeof(dVektor) << "\n";
  cout << ".....................\n";
  //----------------------------------------------------------------
  // Memory allocation
  cout << "Speicherbedarf Arrays\n";
  Zeichenkette = new char[100000];
  iVektor = new int[100000];
  dVektor = new double[100000];
  long size_memory;
  size_memory = _msize(Zeichenkette);
  //  size_memory = malloc_usable_size(Zeichenkette);
  cout << "Zeichenkette:\t" << size_memory << "\n";
  size_memory = _msize(iVektor);
  cout << "iVektor:\t" << size_memory << "\n";
  size_memory = _msize(dVektor);
  cout << "dVektor:\t" << size_memory << "\n";
  cout << ".....................\n";
  //----------------------------------------------------------------
  cout << "Speicherfreigabe\n";
  delete [] Zeichenkette;
  Zeichenkette = NULL;
  delete [] iVektor;
  iVektor = NULL;
  delete [] dVektor;
  dVektor = NULL;
  size_memory = _msize(Zeichenkette);
  cout << "Zeichenkette:\t" << size_memory << "\n";
  size_memory = _msize(iVektor);
  cout << "iVektor:\t" << size_memory << "\n";
  size_memory = _msize(dVektor);
  cout << "dVektor:\t" << size_memory << "\n";
  cout << "....................\n";
  //----------------------------------------------------------------
  dVektor = new double[200000000];
  size_memory = _msize(dVektor);
  cout << "dVektor:\t" << size_memory << "\n";
  return 0;
}
