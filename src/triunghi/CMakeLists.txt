add_library(triunghi STATIC triunghi.cpp)

target_include_directories(triunghi PUBLIC "${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/figura"
)

