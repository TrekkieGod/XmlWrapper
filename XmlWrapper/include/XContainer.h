#pragma once
#include "XNode.h"
#include <list>
#include <memory>

namespace XmlWrapper
{
  class XContainer : public XNode
  {
  public:
    XContainer();
    virtual ~XContainer();
    
    std::shared_ptr<XNode> getFirstNode() const;
    std::shared_ptr<XNode> getLastNode() const;
  private:
    std::list< std::shared_ptr<XNode> > m_oChildren;
  };
}