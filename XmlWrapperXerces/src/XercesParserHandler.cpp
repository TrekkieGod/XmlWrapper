#include "XercesParserHandler.h"

XmlWrapper::XercesParserHandler::XercesParserHandler(std::shared_ptr< XmlWrapper::XDocument > pDocument)
{
  m_pDocument = pDocument;
  m_pProcessingElement = NULL;
}

void XmlWrapper::XercesParserHandler::startElement(const XMLCh*const uri, const XMLCh*const localname, const XMLCh*const qname, const xercesc_3_1::Attributes& attrs)
{
}

void XmlWrapper::XercesParserHandler::characters(const XMLCh*const chars, const XMLSize_t length)
{
}

void XmlWrapper::XercesParserHandler::fatalError(const xercesc_3_1::SAXParseException& excp)
{
}
