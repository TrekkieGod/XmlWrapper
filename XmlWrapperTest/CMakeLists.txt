file(GLOB_RECURSE XML_TEST_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB_RECURSE XML_TEST_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
add_executable(XmlTest ${XML_TEST_SOURCE})
add_dependencies(XmlTest XmlWrapperXerces)

source_group("Headers" FILES ${XML_TEST_SOURCE})
source_group("Sources" FILES ${XML_TEST_HEADERS})

target_include_directories(XmlTest PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" ${LIBXERCES-C_INCLUDE_DIRS})
target_link_libraries(XmlTest PUBLIC ${LIBXERCES-C_LIBRARIES})
