# Set minimum required CMake version
cmake_minimum_required(VERSION 3.5)

# Start project and set its name to ipk-demo
project(ipk-demo LANGUAGES CXX)

# Force compiler to run in C++14 mode
set(CMAKE_CXX_STANDARD 14)

# Create executable programs
add_executable(Aufgabe_1 Aufgabe_1.cc)

# Testing 
enable_testing()

# 1D Fall
add_executable(test_1D test_1D.cc)
add_test(NAME test_1D COMMAND test_1D)

# 3D Fal
add_executable(test_3D test_3D.cc)
add_test(NAME test_3D COMMAND test_3D)
