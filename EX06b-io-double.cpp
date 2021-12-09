#include <iostream>
using namespace std;
int main()
{
  double zahl;
  cout << "Bitte eine Gleitkommazahl eingeben: ";
  cin >> zahl;

  cout.precision(18);

  cout << "Standard: \t"               << zahl << endl;
  cout << "showpoint: \t"  << showpoint  << zahl << endl;
  cout << "fixed: \t\t"    << fixed      << zahl << endl;
  cout << "scientific: \t" << scientific << zahl << endl;
  return 0;
}

