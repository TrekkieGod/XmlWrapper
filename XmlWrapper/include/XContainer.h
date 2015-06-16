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
    
    virtual void Add(std::shared_ptr<XNode> pNode);
  private:
    std::list< std::shared_ptr< XNode > > m_oChildren;
  };
}