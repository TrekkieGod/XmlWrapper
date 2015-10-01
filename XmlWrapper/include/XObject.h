#pragma once

#include "IXmlLineInfo.h"
#include "XmlNodeType.h"
#include <string>

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
    const XDocument& getDocument() const;
    const XElement& getParent() const;
    
  protected:
    void setLineNumber(unsigned int unLineNumber);
    void setLinePosition(unsigned int unLinePosition);
    void setHasLineInfo(bool bHasLineInfo);
    
  private:
    unsigned int m_unLineNumber;
    unsigned int m_unLinePosition;
    bool m_bHasLineInfo;
    std::string m_sBaseUri;
    XDocument* m_pDocument;
    XElement* m_pParent;
  };
}