project(LibATest VERSION 0.1)

enable_testing()

add_executable(libATest libATest.cpp)
target_link_libraries(libATest libA gtest gtest_main)

add_test(libATest libATest)
