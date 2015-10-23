#pragma once
#include "XDeclaration.h"
#include "XElement.h"

#include <memory>

namespace XmlWrapper
{
  class XDocument final : public XContainer
  {
  public:
    static std::shared_ptr<XDocument> Load(const std::string& sFilename);
    
  public:    
    XDocument();
    XDocument(const XDocument& oOriginalDocument);
    
    std::shared_ptr<XDeclaration> getDeclaration() const;
    std::shared_ptr<XElement> getRoot() const;
    XmlNodeType::XmlNodeTypeEnum getNodeType() const override;
    
    void setDeclaration(std::shared_ptr<XDeclaration> oDeclaration);
    
  protected:
    virtual XNode& clone() const override;
    
  private:
    std::shared_ptr<XDeclaration> m_pDeclaration;
    std::shared_ptr<XElement> m_pRoot;
  };  
}