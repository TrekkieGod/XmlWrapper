#pragma once

#include "XObject.h"

namespace XmlWrapper
{
  class XNode : public XObject
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