add_library(romb3d STATIC romb3d.cpp)

target_include_directories(romb3d PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(romb3d PUBLIC "${PROJECT_SOURCE_DIR}/romb")
target_include_directories(romb3d PUBLIC "${PROJECT_SOURCE_DIR}/figura")
