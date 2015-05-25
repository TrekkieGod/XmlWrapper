#pragma once

namespace XmlWrapper
{
  struct XmlNodeType
  {
    enum XmlNodeTypeEnum
    {
      Attribute,
      CDATA,
      Comment,
      Document,
      DocumentFragment,
      DocumentType,
      Element,
      EndElement,
      EndEntity,
      Entity,
      EntityReference,
      None,
      Notation,
      ProcessingInstruction,
      SiginificantWhitespace,
      Text,
      Whitespace,
      XmlDeclaration
    };
  };
}