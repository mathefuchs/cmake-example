cmake_minimum_required(VERSION 3.15.0)
project(testCPP VERSION 0.1.0)

find_package(GTest)
enable_testing()

add_subdirectory(libA)
add_subdirectory(libB)

add_subdirectory(main-app)
