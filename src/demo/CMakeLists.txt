add_executable (pd_demo main.cpp)

target_link_libraries (pd_demo LINK_PUBLIC ../hog)
target_link_libraries (pd_demo LINK_PUBLIC ../nms)
target_link_libraries (pd_demo LINK_PUBLIC ../svm)
