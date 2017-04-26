set(file_list nms.cpp nms.h rect_with_score.cpp rect_with_score.h)
add_library (nms STATIC ${file_list})

include_directories("${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/include")
link_directories("${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/x64/vc12/staticlib")
target_link_libraries(nms opencv_core2412)

install(FILES ${CMAKE_SOURCE_DIR}/src/nms/nms.h DESTINATION ${PD_INSTALL_DIR}/include)
install(FILES ${CMAKE_SOURCE_DIR}/src/nms/rect_with_score.h DESTINATION ${PD_INSTALL_DIR}/include)
install(TARGETS nms ARCHIVE DESTINATION ${PD_INSTALL_DIR}/lib)