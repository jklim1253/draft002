cmake_minimum_required(VERSION 3.10)

# open world library
add_subdirectory(ow)

set(FILE_SOURCES
  "main.cpp"
)
set(FILE_HEADERS
)

add_executable(${CMAKE_PROJECT_NAME}
  ${FILE_SOURCES}
  ${FILE_HEADERS}
)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ow)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ow.admin)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ow.server)