file(GLOB_RECURSE XML_WRAPPER_XERCES_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB_RECURSE XML_WRAPPER_XERCES_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
add_library(XmlWrapperXerces SHARED ${XML_WRAPPER_XERCES_SOURCE})
add_dependencies(XmlWrapperXerces XmlWrapper)

source_group("Headers" FILES ${XML_WRAPPER_XERCES_HEADERS})
source_group("Sources" FILES ${XML_WRAPPER_XERCES_SOURCE})

target_include_directories(XmlWrapperXerces PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" ${LIBXMLWRAPPER_INCLUDE}
			   ${LIBXERCES-C_INCLUDE_DIRS})
target_link_libraries(XmlWrapperXerces PUBLIC XmlWrapper)