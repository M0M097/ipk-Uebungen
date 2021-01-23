cmake_minimum_required(VERSION 3.5)

project(1-2 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

add_library(vectors io.cc statisticsdriver.cc)

add_executable(readvector readvector.cc)
add_executable(uniform uniform.cc)
add_executable(normal normal.cc)

target_link_libraries(readvector PUBLIC vectors)
target_link_libraries(uniform PUBLIC vectors)
target_link_libraries(normal PUBLIC vectors)

enable_testing()
 
add_executable(test_mean test_mean.cc)
target_link_libraries(test_mean PUBLIC vectors)
add_test(NAME test_mean COMMAND test_mean)
 
add_executable(test_median test_median.cc)
target_link_libraries(test_median PUBLIC vectors)
add_test(NAME test_median COMMAND test_median)
