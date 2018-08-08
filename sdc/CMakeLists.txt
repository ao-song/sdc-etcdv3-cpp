set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -mcrc32 -Wno-literal-suffix")

aux_source_directory(. SDC_SOURCES)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../protos/lib)

add_library(sdc SHARED ${SDC_SOURCES})
target_include_directories(sdc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..)
target_link_libraries(sdc LINK_PUBLIC libsdcproto.so)