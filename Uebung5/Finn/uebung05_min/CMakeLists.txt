cmake_minimum_required(VERSION 3.5)

project(ipk-uebung05 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_library(uebung05 io.cc statistics.cc)

add_executable(Aufgabe_1_readvector Aufgabe_1_readvector.cpp)
add_executable(Aufgabe_1_uniform Aufgabe_1_uniform.cpp)
add_executable(Aufgabe_1_normal Aufgabe_1_normal.cpp)

# Tests
add_executable(test_mean test_mean.cpp)
add_executable(test_median test_median.cpp)

# Link against libraries
target_link_libraries(Aufgabe_1_readvector PUBLIC uebung05)
target_link_libraries(Aufgabe_1_uniform  PUBLIC uebung05)
target_link_libraries(Aufgabe_1_normal PUBLIC uebung05)
target_link_libraries(test_mean PUBLIC uebung05)
target_link_libraries(test_median PUBLIC uebung05)

add_test(NAME test_mean COMMAND test_mean)
add_test(NAME test_median COMMAND test_median)
