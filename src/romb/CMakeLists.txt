add_library(romb STATIC romb.cpp romb3d/romb3d.cpp)

add_subdirectory(romb3d)

target_link_libraries(romb PUBLIC romb3d)

target_include_directories(romb PUBLIC "${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/romb/romb3d" "${PROJECT_SOURCE_DIR}/figura")
