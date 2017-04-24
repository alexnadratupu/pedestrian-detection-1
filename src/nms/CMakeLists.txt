set(file_list nms.cpp nms.h rect_with_score.cpp rect_with_score.h)
add_library (nms ${file_list})

include_directories("${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/include")
link_directories("${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/x64/vc12/bin")
target_link_libraries(nms opencv_core2412)

install(files nms.h rect_with_score.h destination "${PD_INSTALL_DIR}/include")
install(targets nms library destination "${PD_INSTALL_DIR}/lib")