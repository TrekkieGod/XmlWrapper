#include "XDocument.h"

using std::string;
using namespace XmlWrapper;

XDocument::XDocument()
{
  m_pDeclaration = NULL;
  m_pRoot = NULL;
}

XDocument::XDocument(const XDocument& oOriginalDocument)
{
  m_pDeclaration = new XDeclaration(*oOriginalDocument.m_pDeclaration);
  m_pRoot = oOriginalDocument.m_pRoot;
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

XElement& XDocument::getRoot() const
{
  return *m_pRoot;
}

XmlNodeType::XmlNodeTypeEnum XDocument::getNodeType() const
{
  return XmlNodeType::Document;
}

void XDocument::Add(XNode& oNode)
{
  if(!m_pRoot && (oNode.getNodeType() == XmlNodeType::Element))
  {
    XContainer::Add(oNode);
    m_pRoot = (XElement*)&oNode;
  }
}

void XDocument::setDeclaration(const XDeclaration& oDeclaration)
{
  if(m_pDeclaration)
  {
    delete m_pDeclaration;
  }
  
  m_pDeclaration = new XDeclaration(oDeclaration);
}