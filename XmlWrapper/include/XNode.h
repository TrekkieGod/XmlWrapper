#pragma once

#include "XObject.h"
#include "ICloneable.h"

namespace XmlWrapper
{
  class XNode : public XObject, protected ICloneable<XNode>
  {
  public:
    XNode();
    std::weak_ptr<XNode> getNextNode();
    std::weak_ptr<XNode> getPreviousNode();
    
  private:
    std::weak_ptr<XNode> m_pNextNode;
    std::weak_ptr<XNode> m_pPreviousNode;
  };
}