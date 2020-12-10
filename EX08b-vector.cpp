#include <iostream>  // for using cout
#include <vector>    // for using vectors
using namespace std; // for std functions

int main()
{
  //----------------------------------------------------------------
  cout << "E81: Vectors" << endl;
  //----------------------------------------------------------------
  vector<long>my_vector;
  cout << "--------------------\n";
  cout << "Current vector size is: " << my_vector.size() << endl;
  my_vector.push_back(12345);
  cout << "Current vector size is: " << my_vector.size() << endl;
  for(long i=1;i<101;i++)
  {
     my_vector.push_back(i*i*i*i);
  }
  cout << "Current vector size is: " << my_vector.size() << endl;
  //----------------------------------------------------------------
  for(long i=0;i<(long)my_vector.size();i++)
  {
    cout << my_vector[i] << endl;
  }
  //----------------------------------------------------------------
  my_vector.clear();
  cout << "Current vector size is: " << my_vector.size() << endl;
  //----------------------------------------------------------------
  return 0;
}
