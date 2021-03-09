cmake_minimum_required(VERSION 3.10)
project(ow VERSION 1.0)

set(FILE_SOURCES
  "ow.cpp"
)
set(FILE_HEADERS
  "ow.hpp"
  "codes.hpp"
)

add_subdirectory(server)
add_subdirectory(admin)

add_library(${PROJECT_NAME}
  ${FILE_SOURCES}
  ${FILE_HEADERS}
)