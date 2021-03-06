#pragma once

#include "IXmlLineInfo.h"
#include "XmlNodeType.h"
#include <string>
#include <memory>

namespace XmlWrapper
{
  class XDocument;
  class XElement;
  
  class XObject : public IXmlLineInfo
  {
  public:
    XObject();
    virtual ~XObject();
    
    virtual XmlNodeType::XmlNodeTypeEnum getNodeType() const = 0;
    
    unsigned int getLineNumber() const override;
    unsigned int getLinePosition() const override;
    bool hasLineInfo() const override;
    const std::string& getBaseUri() const;
    std::weak_ptr<XDocument> getDocument() const;
    std::weak_ptr<XElement> getParent() const;
    
  protected:
    void setLineNumber(unsigned int unLineNumber);
    void setLinePosition(unsigned int unLinePosition);
    void setHasLineInfo(bool bHasLineInfo);
    
  private:
    unsigned int m_unLineNumber;
    unsigned int m_unLinePosition;
    bool m_bHasLineInfo;
    std::string m_sBaseUri;
    std::weak_ptr<XDocument> m_pDocument;
    std::weak_ptr<XElement> m_pParent;
  };
}