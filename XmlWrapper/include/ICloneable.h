#pragma once

namespace XmlWrapper
{
  template<class T>
  class ICloneable
  {
  protected:
    virtual T& clone() const = 0;
  };
}