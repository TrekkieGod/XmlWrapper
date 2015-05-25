#include "XContainer.h"
#include "XDeclaration.h"

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
    XmlNodeType::XmlNodeTypeEnum getNodeType() const override;
    
    void setDeclaration(const XDeclaration& oDeclaration);
    
  private:
    XDeclaration *m_pDeclaration;
  };  
}