set(file_list nms.cpp nms.h rect_with_score.cpp rect_with_score.h)
add_library (nms STATIC ${file_list})

include_directories("${CMAKE_SOURCE_DIR}/../../../3dpls/opencv/build/include")

install(FILES ${CMAKE_SOURCE_DIR}/src/nms/nms.h DESTINATION ${PD_INSTALL_DIR}/include)
install(FILES ${CMAKE_SOURCE_DIR}/src/nms/rect_with_score.h DESTINATION ${PD_INSTALL_DIR}/include)
install(TARGETS nms ARCHIVE DESTINATION ${PD_INSTALL_DIR}/lib)