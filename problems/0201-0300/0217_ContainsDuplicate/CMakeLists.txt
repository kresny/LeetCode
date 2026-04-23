cmake_minimum_required(VERSION 3.16)

project(0217_ContainsDuplicate LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(0217_ContainsDuplicate main.cpp
    Solution.h)

#include(GNUInstallDirs)
#install(TARGETS 0217_ContainsDuplicate
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#)
