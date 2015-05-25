#include "XDeclaration.h"

using std::string;
using namespace XmlWrapper;

XDeclaration::XDeclaration(const XDeclaration &oOriginalDeclaration)
	    : XDeclaration(oOriginalDeclaration.m_sVersion, oOriginalDeclaration.m_sEncoding,
			   oOriginalDeclaration.m_sStandalone)
{
}

XDeclaration::XDeclaration(const string& sVersion, const string& sEncoding, const string& sStandalone)
{
  m_sVersion = sVersion;
  m_sEncoding = sEncoding;
  m_sStandalone = sStandalone;
}

const string& XDeclaration::getEncoding() const
{
  return m_sEncoding;
}

const string& XDeclaration::getStandalone() const
{
  return m_sStandalone;
}

const string& XDeclaration::getVersion() const
{
  return m_sVersion;
}

void XDeclaration::setEncoding(const string& sEncoding)
{
  m_sEncoding = sEncoding;
}

void XDeclaration::setStandalone(const string& sStandalone)
{
  m_sStandalone = sStandalone;
}

void XDeclaration::setVersion(const string& sVersion)
{
  m_sVersion = sVersion;
}