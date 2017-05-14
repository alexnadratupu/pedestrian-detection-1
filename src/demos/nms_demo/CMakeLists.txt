include_directories("${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/include")
include_directories("${CMAKE_SOURCE_DIR}/nms")

link_directories(${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/x64/vc12/staticlib)
link_directories("${CMAKE_SOURCE_DIR}/../build/nms/Debug")

add_executable (nms_demo nms_main.cpp)
target_link_libraries(nms_demo IlmImfd zlibd libjasperd libjpegd libpngd libtiffd opencv_imgproc2412d opencv_core2412d opencv_highgui2412d )
target_link_libraries(nms_demo nms)


