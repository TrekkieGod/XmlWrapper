#include "XNode.h"

using namespace XmlWrapper;
using std::weak_ptr;

XNode::XNode()
{

}

weak_ptr<XNode> XNode::getNextNode()
{
  return m_pNextNode;
}

weak_ptr<XNode> XNode::getPreviousNode()
{
  return m_pPreviousNode;
}
