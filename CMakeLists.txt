cmake_minimum_required(VERSION 3.0)
project(explicit)

add_library(lib SHARED lib.cpp libcommon.cpp)

add_executable(explicit explicit.cxx )
target_link_libraries(explicit lib)
