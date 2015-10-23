#include "XDocument.h"

using std::string;
using std::make_shared;
using std::shared_ptr;
using namespace XmlWrapper;

XDocument::XDocument()
{
  m_pDeclaration = NULL;
  m_pRoot = NULL;
}

XDocument::XDocument(const XDocument& oOriginalDocument)
{
  m_pDeclaration = make_shared<XDeclaration>(*oOriginalDocument.m_pDeclaration);
  m_pRoot = oOriginalDocument.m_pRoot;
}

shared_ptr<XDeclaration> XDocument::getDeclaration() const
{
  return m_pDeclaration;
}

shared_ptr<XElement> XDocument::getRoot() const
{
  return m_pRoot;
}

XmlNodeType::XmlNodeTypeEnum XDocument::getNodeType() const
{
  return XmlNodeType::Document;
}

void XDocument::setDeclaration(shared_ptr<XDeclaration> pDeclaration)
{  
  m_pDeclaration = pDeclaration;
}

XNode& XDocument::clone() const
{
  return *(new XDocument(*this));
}