#include "XDocument.h"

using std::string;
using namespace XmlWrapper;

XDocument::XDocument()
{
  m_pDeclaration = NULL;
}

XDocument::XDocument(const XDocument& oOriginalDocument)
{
  m_pDeclaration = new XDeclaration(*oOriginalDocument.m_pDeclaration);
}

XDocument::~XDocument()
{
  if(m_pDeclaration)
  {
    delete m_pDeclaration;
  }
}

const XDeclaration& XDocument::getDeclaration() const
{
  return *m_pDeclaration;
}

XmlNodeType::XmlNodeTypeEnum XDocument::getNodeType() const
{
  return XmlNodeType::Document;
}

void XDocument::setDeclaration(const XDeclaration& oDeclaration)
{
  if(m_pDeclaration)
  {
    delete m_pDeclaration;
  }
  
  m_pDeclaration = new XDeclaration(oDeclaration);
}