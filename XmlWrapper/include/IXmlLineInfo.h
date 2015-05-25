#pragma once

namespace XmlWrapper
{
  class IXmlLineInfo
  {
  public:
    virtual unsigned int getLineNumber() const = 0;
    virtual unsigned int getLinePosition() const = 0;
    
    virtual bool hasLineInfo() const = 0;
  };
}