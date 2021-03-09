cmake_minimum_required(VERSION 3.10)
project(draft002 VERSION 1.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

include_directories("${CMAKE_SOURCE_DIR}/src")

if (WIN32)
  add_compile_options(-D_WIN32_WINNT=0x0A00)
endif()

add_subdirectory(src)
