#include "XercesParserHandler.h"

#include <string>

#include <xercesc/sax2/SAX2XMLReader.hpp>
#include <xercesc/sax2/XMLReaderFactory.hpp>

using std::string;
using xercesc::XMLPlatformUtils;
using xercesc::SAX2XMLReader;
using xercesc::XMLReaderFactory;
using xercesc::XMLUni;

using namespace XmlParser;

int main()
{
    try
    {
        XMLPlatformUtils::Initialize();
    }
    catch(...)
    {
        return 1;
    }

    string sXmlFile = "GasTurbineGenSet.vte";
    SAX2XMLReader *pParser = XMLReaderFactory::createXMLReader();
    pParser->setFeature(XMLUni::fgSAX2CoreValidation, true);
    pParser->setFeature(XMLUni::fgSAX2CoreNameSpaces, true);

    XercesParserHandler *pHandler = new XercesParserHandler();
    pParser->setContentHandler(pHandler);
    pParser->setErrorHandler(pHandler);

    try
    {
        pParser->parse(sXmlFile.c_str());
    }
    catch(...)
    {
        delete pParser;
        delete pHandler;
        XMLPlatformUtils::Terminate();

        return 2;
    }

    delete pParser;
    delete pHandler;
    XMLPlatformUtils::Terminate();
    return 0;
}
