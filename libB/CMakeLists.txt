project(LibB VERSION 0.1)

include_directories(include src)

add_library(libB src/libImpl.cpp)

target_include_directories(libB PUBLIC include)
target_link_libraries(libB libA)
