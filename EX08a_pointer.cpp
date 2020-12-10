#include <iostream>  // for using cout
using namespace std;

int main()
{
  //----------------------------------------------------------------
  cout << "EX08a_pointer: Pointer and references definitions" << endl;
  //----------------------------------------------------------------
  double x;
  double* ptr_x;
  double& ref_x = x; // initialisation is needed
  x = 1.23456789;
  ptr_x = &x;
  cout << "x:\t" << x << "     \t" \
	   << "&x:\t" << &x << "\t" \
	   << sizeof(x) \
	   << endl;
  cout << "ptr_x:\t" << ptr_x << "\t" \
	   << "&ptr_x:\t" << &ptr_x << "\t" \
	   << sizeof(ptr_x) \
	   << endl;
  cout << "ref_x:\t" << ref_x << "   \t" \
       << "&ref_x:\t" << &ref_x << "\t"\
	   << sizeof(ref_x) \
	   << endl;
  //----------------------------------------------------------------
  cout << "Schreiben Sie die Ausgabe so um, dass die Ausdruecke mit gleichen Werten bzw. Adressen nebeneinander stehen." << endl;
  //----------------------------------------------------------------
  return 0;
}
