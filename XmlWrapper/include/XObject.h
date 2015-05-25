#pragma once

#include "IXmlLineInfo.h"
#include "XmlNodeType.h"

namespace XmlWrapper
{
  class XObject : public IXmlLineInfo
  {
  public:
    virtual XmlNodeType::XmlNodeTypeEnum getNodeType() const = 0;
    
    unsigned int getLineNumber() const override;
    unsigned int getLinePosition() const override;
    bool hasLineInfo() const override;
    
  protected:
    void setLineNumber(unsigned int unLineNumber);
    void setLinePosition(unsigned int unLinePosition);
    void setHasLineInfo(bool bHasLineInfo);
    
  private:
    unsigned int m_unLineNumber;
    unsigned int m_unLinePosition;
    bool m_bHasLineInfo;
  };
}