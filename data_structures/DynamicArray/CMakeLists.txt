cmake_minimum_required(VERSION 3.16)

project(DynamicArray LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DynamicArray main.cpp
    dynamicarray.h dynamicarray.cpp)

#include(GNUInstallDirs)
#install(TARGETS DynamicArray
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#)
