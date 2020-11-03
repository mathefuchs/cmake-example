cmake_minimum_required(VERSION 3.15.0)
project(testCPP VERSION 0.1.0)

# External projects
add_subdirectory(external/googletest)

# Libaries
add_subdirectory(libA)
add_subdirectory(libB)

# Main App
add_subdirectory(main-app)

# Tests
add_subdirectory(libA/tests)
add_subdirectory(libB/tests)
