set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -mcrc32 -Wno-literal-suffix")

aux_source_directory(src/ PROTO_SOURCES)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/lib)

link_directories(/usr/local/lib)

add_library(sdcproto SHARED ${PROTO_SOURCES})
target_include_directories(sdcproto PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_link_libraries(sdcproto LINK_PUBLIC protobuf grpc++_unsecure grpc++_reflection)