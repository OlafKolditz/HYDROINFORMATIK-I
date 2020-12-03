#include <iostream>
#include <string>
using namespace std;
int main()
{
  string eingabe;
  string message("Bitte geben Sie eine Zeile mit der Tastatur ein. Schliessen Sie die Eingabe mit Enter ab");
  int i;
  i=7;
  //-------------------------------------------------------------------
  cout << message << endl; // Ausgabe der Eingabeaufforderung
  getline(cin,eingabe); // Eingabe einer Zeile über Tastatur
  string eingabe_anfang(eingabe,0,i); // die ersten i Zeichen von eingabe werden nach eingabe_anfang kopiert
  cout << "Ihr Eingagetext: " << eingabe << endl;
  cout << "Die ersten " << i << " Zeichen des Eingagetextes: " << eingabe_anfang << endl;
  return 0;
}

