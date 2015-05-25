file(GLOB_RECURSE XML_WRAPPER_XERCES_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_library(XmlWrapperXerces SHARED ${XML_WRAPPER_XERCES_SOURCE})
add_dependencies(XmlWrapperXerces XmlWrapper)
source_group("Sources" FILES ${XML_WRAPPER_XERCES_SOURCE})

target_include_directories(XmlWrapperXerces PUBLIC ${LIBXMLWRAPPER_INCLUDE} ${LIBXERCES-C_INCLUDE_DIRS})