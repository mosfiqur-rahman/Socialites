/***
 *PROGRAM main.cpp
 *PURPOSE This tests the Socialite Class and creates five profile pages
 ***/

//----------Includes----------//
#include "Socialite.h"
#include <fstream>

//----------Namespaces----------//
using namespace std;

//----------main Function----------//
int main ()
/***
PURPOSE main function to test the class Socialite
***/
{
  string userId, line, dataFile, textFile, htmlFile;
  ofstream os;
  char new_line_check;
  bool first = true;

  cout << "Enter File Name: ";
  cin >> dataFile;
  cout << endl;
  ifstream inf (dataFile.c_str ());

  while (!inf.eof ())
    {
      Socialite socialite;

      getline (inf, line, '\n');
      line = (first) ? line : (new_line_check + line);
      socialite.setUserId (line);
      userId = line;

      getline (inf, line, '\n');
      socialite.setFirstName (line);

      getline (inf, line, '\n');
      socialite.setLastName (line);

      getline (inf, line, '\n');
      socialite.setPicture (line);

      getline (inf, line, '\n');
      socialite.setWebsite (line);

      getline (inf, line, '\n');
      socialite.setWebsiteDescription (line);

      while ((getline (inf, line, '\n')) && (line.find ("++++") == string::npos))
	{
	  socialite.addClique (line);
	}

      while ((inf >> new_line_check) && (new_line_check == '\n'))
	{
	}

      textFile = userId + ".txt";
      htmlFile = userId + ".html";
      
      os.open (textFile.c_str ());
      socialite.toText (os);
      os.close ();

      os.open (htmlFile.c_str ());
      socialite.toHTML (os);
      os.close ();

      socialite.toText (cout);

      cout << endl;

      first = false;
    }

  return 0;
}
