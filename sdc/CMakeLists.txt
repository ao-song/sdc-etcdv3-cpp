cmake_minimum_required(VERSION 2.8.5)

project(sdc)

set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -mcrc32 -Wno-literal-suffix")

set(SDC_SOURCES
   client.cc
   grpc_client.cc
)

add_library(sdc STATIC ${SDC_SOURCES})
target_include_directories(sdc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})