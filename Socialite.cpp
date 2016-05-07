//----------Includes----------//
#include "Socialite.h"

//----------Attributes----------//

  string lastName_;
  string firstName_;
  string userId_;
  string picture_;
  string website_;
  string websiteDescription_;
  vector<string> cliques_;

//----------Constructors----------//

Socialite::Socialite ()
{
  lastName_           = "";
  firstName_          = "";
  userId_             = "";
  picture_            = "";
  website_            = "";
  websiteDescription_ = "";
}

//----------Mutators----------//

//----------setLastName Method----------//
void Socialite::setLastName (string lastName)
/*
 *PURPOSE Setter Function
 *@param lastName
 */
{
  lastName_ = lastName;
}

//----------setFirstName Method----------//
void Socialite::setFirstName (string firstName)
/*
 *PURPOSE Setter Function
 *@param firstName
 */
{
  firstName_ = firstName;
}

//----------setUserId Method----------//
void Socialite::setUserId (string userId)
/*
 *PURPOSE Setter Function
 *@param userId
 */
{
  userId_ = userId;
}

//----------setPicture Method----------//
void Socialite::setPicture (string picture)
/*
 *PURPOSE Setter Function
 *@param picture
 */
{
  picture_ = picture;
}

//----------setWebsite Method----------//
void Socialite::setWebsite (string website)
/*
 *PURPOSE Setter Function
 *@param website
 */
{
  website_ = website;
}

//----------setWebsiteDescription Method----------//
void Socialite::setWebsiteDescription (string websiteDescription)
/*
 *PURPOSE Setter Function
 *@param websiteDescription
 */
{
  websiteDescription_ = websiteDescription;
}

void Socialite::addClique (string clique)
{
  cliques_.push_back (clique);
}

//----------Accessors----------//

//----------getLastName Method----------//
string Socialite::getLastName ()
/*
 *PURPOSE Getter Function
 *@param lastName
 */
{
  return lastName_;
}

//----------getFirstName Method----------//
string Socialite::getFirstName ()
/*
 *PURPOSE Getter Function
 *@param firstName
 */
{
  return firstName_;
}

//----------getUserId Method----------//
string Socialite::getUserId ()
/*
 *PURPOSE Getter Function
 *@param userId
 */
{
  return userId_;
}

//----------getPicture Method----------//
string Socialite::getPicture ()
/*
 *PURPOSE Getter Function
 *@param picture
 */
{
  return picture_;
}

//----------getWebsite Method----------//
string Socialite::getWebsite ()
/*
 *PURPOSE Getter Function
 *@param website
 */
{
  return website_;
}

//----------getWebsiteDescription Method----------//
string Socialite::getWebsiteDescription ()
/*
 *PURPOSE Getter Function
 *@param websiteDescription
 */
{
  return websiteDescription_;
}

unsigned int Socialite::getNumberOfCliques ()
{
  return cliques_.size ();
}

string Socialite::cliqueAt (unsigned int index)
{
  if (index < cliques_.size ())
    {
      return cliques_[index];
    }
  return "";
}

//----------Facilitators----------//

//----------toText Method----------//
void Socialite::toText (ostream& os)
/*
 *PURPOSE Print Text to ostream object
 *@param os
 */
{
  unsigned int index;

  os << "Last Name : " << lastName_ << endl
     << "First Name : " << firstName_ << endl
     << "User ID : " << userId_ << endl
     << "Picture : " << picture_ << endl
     << "Website : " << website_ << endl
     << "Website Description : " << websiteDescription_ << endl
     << "Cliques : " << endl;

  for (index = 0; index < cliques_.size (); index++)
    {
      os << cliques_[index] << endl;
    }

}

//----------toHTML Method----------//
void Socialite::toHTML (ostream& os)
/*
 *PURPOSE Print hTML to ostream object
 *@param os
 */
{
  unsigned int index;

  os << "<html>" << endl
     << "\t<head>" << endl
     

<< "\t\t<title>" << firstName_ << " " << lastName_ << "'s Socialite Page</title>" << endl<< "\t</head>" << endl
     << endl
     << "\t<body>" << endl  << "\t\t<img SRC='" << picture_ << "' ALT='" << firstName_ << " " << lastName_ << "'s picture' ALIGN='CENTER' />" << endl
     << "\t\t<h1>User " << userId_ << "</h1>" << endl
     

<< "\t\t<h2>" << firstName_ << " " << lastName_ << "</h2>" << endl << "\t\t<hr />" << endl       << "\t\t" << firstName_ << " wants to share <a HREF=\"" << website_ << "\" TARGET=_blank>" << websiteDescription_ << "</a> with you: <br />" << website_  << endl
     << "\t\t<hr />" << endl<< "\t\t<p><i>Cliques:</i></p>" << endl<< "\t\t<ul>" << endl;

  for (index = 0; index < cliques_.size (); index++)
    {
      os << "\t\t\t<li>" << cliques_[index] << "</li>" << endl;
    }

  os << "\t\t</ul>" << endl
     << "\t</body>" << endl
     << "</html>" << endl;
}
