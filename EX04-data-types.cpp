#include <iostream>
using namespace std;
int main()
{
  cout << "E04-data-types: Size of data types\n";
//  system("pwd");
  cout << "Type\tNumber of bytes\n";
  cout << "-----------------------\n";
  cout << "bool\t\t" << sizeof(bool) << endl;
  cout << "char\t\t" << sizeof(char) << "\n";
  cout << "short\t\t" << sizeof(short) << endl;
  cout << "int\t\t" << sizeof(int) << endl;
  cout << "long\t\t" << sizeof(long) << endl;
  cout << "float\t\t" << sizeof(float) << endl;
  cout << "double\t\t" << sizeof(double) << endl;
  cout << "long double\t" << sizeof(long double) << endl;
  return 0;
}

