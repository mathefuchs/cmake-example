project(LibA VERSION 0.1)

include_directories(include src)

add_library(libA src/libImpl.cpp)

target_include_directories(libA PUBLIC include)
