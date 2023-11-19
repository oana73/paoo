cmake_minimum_required(VERSION 3.10)

project(Main VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(figura)
add_subdirectory(romb)
add_subdirectory(triunghi)

add_executable(Main main.cpp)

target_link_libraries(Main PUBLIC romb)
target_link_libraries(Main PUBLIC triunghi)
target_link_libraries(Main PUBLIC figura)


target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}/romb" "${PROJECT_SOURCE_DIR}/triunghi" "${PROJECT_SOURCE_DIR}/figura")
