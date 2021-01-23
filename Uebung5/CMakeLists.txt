# Set minimum required CMake version
cmake_minimum_required(VERSION 3.5)
# Start project and set its name to ipk-demo
project(ipk-demo LANGUAGES CXX)
# Force compiler to run in C++14 mode
set(CMAKE_CXX_STANDARD 14)
# Create a library
add_library(io_statistics io.cc statistics.cc)
# Create executable programs
#add_executable(readvector readvector.cpp io.cc statistics.cc)
#add_executable(normal normal.cpp io.cc statistics.cc)
#add_executable(uniform uniform.cpp io.cc statistics.cc)
add_executable(readvector readvector.cpp)
add_executable(normal normal.cpp)
add_executable(uniform uniform.cpp)
# Link against libraries 
target_link_libraries(readvector PUBLIC io_statistics)
target_link_libraries(normal PUBLIC io_statistics)
target_link_libraries(uniform PUBLIC io_statistics)
