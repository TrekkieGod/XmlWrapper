#pragma once
#include <xercesc/sax2/DefaultHandler.hpp>
#include <xercesc/util/XMLString.hpp>

namespace XmlParser
{
    class XercesParserHandler : public xercesc::DefaultHandler
    {
        public:
            void startElement(const XMLCh* const uri, const XMLCh* const localname,
                              const XMLCh* const qname, const xercesc::Attributes& attrs) override;
            void characters(const XMLCh* const chars, const XMLSize_t length) override;
            void fatalError(const xercesc::SAXParseException& excp) override;
    };
}
