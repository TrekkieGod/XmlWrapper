#include "XercesParserHandler.h"
#include <xercesc/sax2/Attributes.hpp>

using xercesc::Attributes;
using xercesc::SAXParseException;
using xercesc::XMLString;

using namespace XmlParser;

void XercesParserHandler::startElement(const XMLCh* const uri, const XMLCh* const localname, const XMLCh* const qname,
                                       const Attributes& attrs)
{
    char *sUri = XMLString::transcode(uri);
    char *sLocalName = XMLString::transcode(localname);
    char *sQName = XMLString::transcode(qname);

    for(XMLSize_t iAttribute = 0; iAttribute < attrs.getLength(); iAttribute++)
    {
        char *sAttributeName = XMLString::transcode(attrs.getLocalName(iAttribute));
        char *sValue = XMLString::transcode(attrs.getValue(iAttribute));

        XMLString::release(&sAttributeName);
        XMLString::release(&sValue);
    }

    XMLString::release(&sUri);
    XMLString::release(&sLocalName);
    XMLString::release(&sQName);
}

void XercesParserHandler::characters(const XMLCh* const chars, const XMLSize_t length)
{
    char *sChars = XMLString::transcode(chars);

    XMLString::release(&sChars);
}

void XercesParserHandler::fatalError(const SAXParseException& excp)
{
}
