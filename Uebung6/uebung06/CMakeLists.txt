cmake_minimum_required(VERSION 3.5)

project(ipk-uebung06 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_executable(Aufgabe_2 Aufgabe_2.cpp point.cc pgm.cc canvas.cc)

add_executable(testcorners testcorners.cpp pgm.cc point.cc canvas.cc)

add_test(NAME testcorners COMMAND testcorners)
