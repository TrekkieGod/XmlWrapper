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
    ~XDocument();
    
    const XDeclaration& getDeclaration() const;
    XElement& getRoot() const;
    XmlNodeType::XmlNodeTypeEnum getNodeType() const override;
    void Add(const XNode& oNode) override;
    
    void setDeclaration(const XDeclaration& oDeclaration);
    
  protected:
    virtual XNode& clone() const override;
    
  private:
    XDeclaration *m_pDeclaration;
    XElement *m_pRoot;
  };  
}