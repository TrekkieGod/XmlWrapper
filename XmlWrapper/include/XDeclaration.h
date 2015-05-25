#pragma once

#include <string>

namespace XmlWrapper
{
  class XDeclaration final
  {
  public:
    XDeclaration(const XDeclaration &oOriginalDeclaration);
    XDeclaration(const std::string& sVersion, const std::string& sEncoding, const std::string& sStandalone);
    
    const std::string& getEncoding() const;
    const std::string& getStandalone() const;
    const std::string& getVersion() const;
    
    void setEncoding(const std::string& sEncoding);
    void setStandalone(const std::string& sStandalone);
    void setVersion(const std::string& sVersion);
    
  private:
    std::string m_sEncoding;
    std::string m_sStandalone;
    std::string m_sVersion;
  };
}