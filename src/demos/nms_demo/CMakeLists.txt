add_executable (nms_demo nms_main.cpp)

include_directories("../../../../3dpls/opencv/build/include")
include_directories("../nms")
link_directories("../../build/nms/Debug")


target_link_libraries(nms_demo nms)
