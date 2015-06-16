#pragma once
#include "XDocument.h"
#include <xercesc/sax2/DefaultHandler.hpp>
#include <xercesc/util/XMLString.hpp>

namespace XmlWrapper
{
  class XercesParserHandler final : public xercesc::DefaultHandler
  {
  public:
    XercesParserHandler(std::shared_ptr<XDocument> pDocument);
    void startElement(const XMLCh* const uri, const XMLCh* const localname,
		      const XMLCh* const qname, const xercesc::Attributes& attrs) override;
    void characters(const XMLCh* const chars, const XMLSize_t length) override;
    void fatalError(const xercesc::SAXParseException& excp) override;
  private:
    std::shared_ptr<XDocument> m_pDocument;
    XElement *m_pProcessingElement;
  };
}
