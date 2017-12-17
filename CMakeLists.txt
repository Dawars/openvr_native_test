cmake_minimum_required(VERSION 3.9)
project(openvr_native_test)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/headers)

#link_libraries(${CMAKE_SOURCE_DIR}/bin/osx32/libopenvr_api.dylib)
link_directories(${CMAKE_SOURCE_DIR}/bin/osx32/)

add_executable(openvr_native_test main.cpp)



