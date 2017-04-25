# root CMake file for pd
cmake_minimum_required(VERSION 3.8)
project(pd)

set(PD_INSTALL_DIR "${CMAKE_SOURCE_DIR}/../output/include")

add_subdirectory(demos/nms_demo)
add_subdirectory(demos/pd_demo)
add_subdirectory(hog)
add_subdirectory(svm)
add_subdirectory(nms)
