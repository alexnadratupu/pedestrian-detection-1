add_executable (nms_demo nms_main.cpp)

include_directories("${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/include")
include_directories("${CMAKE_SOURCE_DIR}/nms")

link_directories(${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/x64/vc12/staticlib)
target_link_libraries(nms_demo opencv_core2412)

link_directories("${CMAKE_SOURCE_DIR}/../build/nms/Debug")
target_link_libraries(nms_demo nms)

