#pragma once
#include "XNode.h"
#include <list>

namespace XmlWrapper
{
  class XContainer : public XNode
  {
  public:
    XContainer();
    virtual ~XContainer();
    
    XNode& getFirstNode() const;
    XNode& getLastNode() const;
    
    virtual void Add(const XNode& pNode);
  private:
    std::list< XNode* > m_oChildren;
  };
}