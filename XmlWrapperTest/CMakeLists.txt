file(GLOB_RECURSE XML_TEST_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(XmlTest ${XML_TEST_SOURCE})
add_dependencies(XmlTest XmlWrapperXerces)

source_group("Headers" FILES ${XML_TEST_SOURCE})

target_include_directories(XmlTest PUBLIC ${LIBXMLWRAPPER_INCLUDE})
target_link_libraries(XmlTest PUBLIC XmlWrapperXerces ${LIBXERCES-C_LIBRARIES})

enable_testing()
add_test(LoadVte XmlTest "${CMAKE_CURRENT_SOURCE_DIR}/../TestFiles/GasTurbineGenSet.vte")