project(MainApp VERSION 0.1)

include_directories(src)

add_executable(main-app src/main.cpp)

target_link_libraries(main-app libA libB)
