#include "XObject.h"
#include "XDocument.h"
#include "XElement.h"

using namespace XmlWrapper;
using std::weak_ptr;

XObject::XObject()
{
  m_bHasLineInfo = false;
  m_unLineNumber = 0;
  m_unLinePosition = 0;
}

XObject::~XObject()
{
}

unsigned int XObject::getLineNumber() const
{
  return m_unLineNumber;
}

unsigned int XObject::getLinePosition() const
{
  return m_unLinePosition;
}

weak_ptr<XDocument> XObject::getDocument() const
{
  return m_pDocument;
}

weak_ptr<XElement> XObject::getParent() const
{
  return m_pParent;
}

bool XObject::hasLineInfo() const
{
  return m_bHasLineInfo;
}

void XObject::setHasLineInfo(bool bHasLineInfo)
{
  m_bHasLineInfo = bHasLineInfo;
}

void XObject::setLineNumber(unsigned int unLineNumber)
{
  m_unLineNumber = unLineNumber;
}

void XObject::setLinePosition(unsigned int unLinePosition)
{
  m_unLinePosition = m_unLinePosition;
}