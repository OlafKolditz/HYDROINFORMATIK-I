#include <string>
#include <iostream>
#include <fstream> 
using namespace std;
// Class definition
class CStudent
{
  private:
    int year;
    long bank_account;
  //protected:
  public:
    string name_first;
    string name_last;
    string course;
    string birthday;
    string nation;
    string gender;
    long id;
    string email;
    string city;
    string street;
    int bmp_id;
  public:
    CStudent();  // constructor
    ~CStudent(); // destructor
    ios::pos_type Read(ifstream&);
};

