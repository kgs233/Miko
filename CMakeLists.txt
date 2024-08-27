cmake_minimum_required(VERSION 3.20)

project(
  "Miko"
  LANGUAGES CXX C
  DESCRIPTION "A New Language"
  VERSION 0.0.0)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  set(EXPORT_COMPILE_COMMANDS on)
  set(CMAKE_CXX_FLAGS_DEBUG "-fstandalone-debug -fPIC -O0 -g")
endif(CMAKE_BUILD_TYPE STREQUAL "Debug")

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

file(GLOB_RECURSE headerses ${PROJECT_SOURCE_DIR}/src/*.hpp)
file(GLOB_RECURSE sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(miko ${sources})

# LLVM
find_package(LLVM REQUIRED)

message(STATUS "Found LLVM: ${LLVM_VERSION}")
message(STATUS "Found LLVM_CONFIG in: ${LLVM_CONFIG}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${LLVM_CXXFLAGS}")
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} ${LLVM_CFLAGS}")
include_directories(${LLVM_INCLUDE_DIRS})
target_link_libraries(miko PUBLIC ${LLVM_LIBRARIES})
