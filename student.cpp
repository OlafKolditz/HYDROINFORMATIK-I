#include "student.h"

CStudent::CStudent()
{
  name_first = "Maxi";
  name_last = "Musterfrau";
}

CStudent::~CStudent()
{
}

/**************************************************************************
STD read function
04/2009 OK Implementation
**************************************************************************/
ios::pos_type CStudent::Read(ifstream& input_file)
{
  //----------------------------------------------------------------------
  string input_line;
  char buffer[256]; // MAX_LINE
  ios::pos_type position;
  //----------------------------------------------------------------------
  while(true)
  {
    position = input_file.tellg(); //OK
    input_file.getline(buffer,256); 
    input_line = buffer;
cout << input_line << endl;
//return position;
    if(input_line.size()<1) // empty line
      continue; 
    // Dealing with keywords
    if(input_line.find('#')!=string::npos) // keyword found
      return position;
    // Dealing with subkeywords
    if(input_line.find("$NAME_FIRST")!=string::npos) // lesen bis ans Ende des strings
    {
      input_file.getline(buffer,256);
      input_line = buffer;
      name_first = input_line;
cout << input_line << endl;
return position;
    }
    if(input_line.find("$NAME_LAST")!=string::npos)
    {
      input_file >> name_last;
    }
    if(input_line.find("$COURSE")!=string::npos) 
    {
      input_file >> course;
    }
    if(input_line.find("$YEAR")!=string::npos)
    {
      input_file >> year;
    }
    if(input_line.find("$BANK_ACCOUNT")!=string::npos)
    {
      input_file >> bank_account;
    }
    if(input_line.find("$BIRTHDAY")!=string::npos)
    {
      input_file >> birthday;
    }
    if(input_line.find("$NATION")!=string::npos)
    {
      input_file >> nation;
    }
    if(input_line.find("$GENDER")!=string::npos)
    {
      input_file >> gender;
    }
    if(input_line.find("$ID")!=string::npos)
    {
      input_file >> id;
    }
    if(input_line.find("$EMAIL")!=string::npos)
    {
      input_file >> email;
    }
    if(input_line.find("$ADDRESS")!=string::npos)
    {
      input_file >> city;
      input_file >> street;
    }
    if(input_line.find("$FOTO_ID")!=string::npos)
    {
      input_file >> bmp_id;
    }
  }
  //----------------------------------------------------------------------
  return position;
}

