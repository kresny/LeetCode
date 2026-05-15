cmake_minimum_required(VERSION 3.16)

project(DynamicArray LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(dynamic_array main.cpp
    dynamic_array.h dynamic_array.cpp)

#include(GNUInstallDirs)
#install(TARGETS dynamic_array
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#)
