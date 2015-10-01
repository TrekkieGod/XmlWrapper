#include "XDocument.h"
#include <iostream>
#include <string>

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::shared_ptr;
using std::exception;
using XmlWrapper::XDocument;
using XmlWrapper::XElement;

enum ERROR_CODES
{
  UNKNOWN_ERROR = -1,
  OK = 0,
  INCORRECT_USAGE = 1
};

int main(int argc, char *argv[])
{
  if(argc == 1)
  {
    cerr << "USAGE:  " << argv[0] << " <xml_file_path>" << endl;
    return INCORRECT_USAGE;
  }
  
  try
  {
    shared_ptr<XDocument> pDocument = XDocument::Load(argv[1]);
    XElement &oRoot = pDocument->getRoot();
    return OK;
  }
  catch(exception& excp)
  {
    cerr << excp.what() << endl;
    return UNKNOWN_ERROR;
  }
  catch(...)
  {
    cerr << "An unknown problem has occurred." << endl;
    return UNKNOWN_ERROR;
  }
}
