#include "XDocument.h"
#include "XercesParserHandler.h"
#include <xercesc/sax2/SAX2XMLReader.hpp>
#include <xercesc/sax2/XMLReaderFactory.hpp>

using namespace XmlWrapper;
using std::string;
using std::shared_ptr;
using std::make_shared;

using xercesc::XMLPlatformUtils;
using xercesc::SAX2XMLReader;
using xercesc::XMLReaderFactory;
using xercesc::XMLUni;

shared_ptr<XDocument> XDocument::Load(const string& sFilename)
{
  XMLPlatformUtils::Initialize();

  SAX2XMLReader *pParser = XMLReaderFactory::createXMLReader();
  pParser->setFeature(XMLUni::fgSAX2CoreValidation, true);
  pParser->setFeature(XMLUni::fgSAX2CoreNameSpaces, true);

  shared_ptr<XDocument> pDocument = make_shared<XDocument>();
  XercesParserHandler *pHandler = new XercesParserHandler(pDocument);
  pParser->setContentHandler(pHandler);
  pParser->setErrorHandler(pHandler);

  try
  {
      pParser->parse(sFilename.c_str());
      pDocument->setDeclaration(make_shared<XDeclaration>("1.0", "utf-8", "no"));
  }
  catch(...)
  {
      delete pParser;
      delete pHandler;
      XMLPlatformUtils::Terminate();

      throw "Problem";
  }

  delete pParser;
  delete pHandler;
  XMLPlatformUtils::Terminate();
  
  return pDocument;
}

