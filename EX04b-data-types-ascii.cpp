#include <iostream>
using namespace std;
int main()
{
  char x = 'a'; 
  std::cout << "Eingegebenes Zeichen: " << x << std::endl; 
  int y = x; 
  std::cout << "Der ASCII-Code für " << x << " ist " << y << std::endl;
  return 0;
}