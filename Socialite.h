#ifndef SOCIALITE_H_
#define SOCIALITE_H_

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

#endif

class Socialite
{

 public:
  
  /*Constructor*/
  Socialite ();

  /*Mutators*/
  void setLastName (string lastName);
  void setFirstName (string firstName);
  void setUserId (string userId);
  void setPicture (string picture);
  void setWebsite (string website);
  void setWebsiteDescription (string websiteDescription);
  void addClique (string clique);
  
  /*Accessors*/
  string getLastName ();
  string getFirstName ();
  string getUserId ();
  string getPicture ();
  string getWebsite ();
  string getWebsiteDescription ();
  unsigned int getNumberOfCliques ();
  string cliqueAt (unsigned int index);
  
  /*Facilitators*/
  void toText (ostream& os);
  void toHTML (ostream& os);
  
 private:

  /*Attributes*/
  string lastName_;
  string firstName_;
  string userId_;
  string picture_;
  string website_;
  string websiteDescription_;
  vector<string> cliques_;
};
