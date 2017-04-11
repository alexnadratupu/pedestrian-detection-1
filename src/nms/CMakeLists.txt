set(file_list nms.cpp nms.h rect_with_score.cpp rect_with_score.h)
add_library (nms ${file_list})

include_directories(D:\pd\3dpls\opencv\build\include)
target_link_libraries(D:\pd\3dpls\opencv\build\x64\vc12\bin)

target_include_directories (nms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})