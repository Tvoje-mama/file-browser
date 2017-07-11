cmake_minimum_required(VERSION 3.7)
project(file_browser)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp io/DirectoryUtils.cpp io/DirectoryUtils.h)
add_executable(file_browser ${SOURCE_FILES})