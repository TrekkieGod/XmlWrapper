#include "XObject.h"
#include "XDocument.h"
#include "XElement.h"

using XmlWrapper::XDocument;
using XmlWrapper::XElement;

XmlWrapper::XObject::XObject()
{
  m_bHasLineInfo = false;
  m_unLineNumber = 0;
  m_unLinePosition = 0;
}

XmlWrapper::XObject::~XObject()
{
}

unsigned int XmlWrapper::XObject::getLineNumber() const
{
  return m_unLineNumber;
}

unsigned int XmlWrapper::XObject::getLinePosition() const
{
  return m_unLinePosition;
}

const XDocument& XmlWrapper::XObject::getDocument() const
{
  return *m_pDocument;
}

const XElement& XmlWrapper::XObject::getParent() const
{
  return *m_pParent;
}

bool XmlWrapper::XObject::hasLineInfo() const
{
  return m_bHasLineInfo;
}

void XmlWrapper::XObject::setHasLineInfo(bool bHasLineInfo)
{
  m_bHasLineInfo = bHasLineInfo;
}

void XmlWrapper::XObject::setLineNumber(unsigned int unLineNumber)
{
  m_unLineNumber = unLineNumber;
}

void XmlWrapper::XObject::setLinePosition(unsigned int unLinePosition)
{
  m_unLinePosition = m_unLinePosition;
}