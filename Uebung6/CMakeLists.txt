# Set minimum required CMake version
cmake_minimum_required(VERSION 3.5)

# Start project and set its name to ipk-demo
project(ipk-demo LANGUAGES CXX)

# Force compiler to run in C++14 mode
set(CMAKE_CXX_STANDARD 14)

# Create executable programs
add_executable(Aufgabe_1 Aufgabe_1.cpp point.cc polygon.cc)
