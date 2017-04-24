add_executable (nms_demo nms_main.cpp)


include_directories(""${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/include")
include_directories("${PD_INSTALL_DIR}/include")
link_directories("${PD_INSTALL_DIR}/lib")

target_link_libraries(nms_demo nms)