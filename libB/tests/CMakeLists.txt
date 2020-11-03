project(LibBTest VERSION 0.1)

enable_testing()

add_executable(libBTest libBTest.cpp)
target_link_libraries(libBTest libB gtest gtest_main)

add_test(libBTest libBTest)
