cmake_minimum_required(VERSION 3.10)
project(ow.admin VERSION 1.0)

set(FILE_SOURCES
  "admin.cpp"
)
set(FILE_HEADERS
  "admin.hpp"
)

add_compile_options(-DOW_ADMIN_EXPORTS)

add_library(${PROJECT_NAME} SHARED
  ${FILE_SOURCES}
  ${FILE_HEADERS}
)