cmake_minimum_required(VERSION 3.10)
project(ow.server VERSION 1.0)

set(FILE_SOURCES
  "server.cpp"
)
set(FILE_HEADERS
  "server.hpp"
)

add_compile_options(-DOW_SERVER_EXPORTS)

add_library(${PROJECT_NAME} SHARED
  ${FILE_SOURCES}
  ${FILE_HEADERS}
)