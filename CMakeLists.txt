cmake_minimum_required(VERSION 3.17)
project(PT_L1_cLion_)

set(CMAKE_CXX_STANDARD 14)

add_executable(PT_L1_cLion_ main.cpp)

include_directories(${CMAKE_SOURCE_DIR}/bin)

target_link_libraries(PT_L1_cLion_ ${CMAKE_SOURCE_DIR}/bin/PT_L1_shared.lib)