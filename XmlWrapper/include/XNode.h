#pragma once

#include "XObject.h"
#include "ICloneable.h"

namespace XmlWrapper
{
  class XNode : public XObject, protected ICloneable<XNode>
  {
  public:
    XNode();
    virtual ~XNode();
    XNode& getNextNode();
    XNode& getPreviousNode();
    
  private:
    XNode *m_pNextNode;
    XNode *m_pPreviousNode;
  };
}