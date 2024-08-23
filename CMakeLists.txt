cmake_minimum_required(VERSION 3.20)

project(
  "Miko"
  LANGUAGES CXX C
  DESCRIPTION "A New Language"
  VERSION 0.0.0)

option(USE_LLVM "Use LLVM Toolchain" OFF)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  set(EXPORT_COMPILE_COMMANDS on)
  set(CMAKE_CXX_FLAGS_DEBUG "-fstandalone-debug -fPIC -O0 -g")
endif(CMAKE_BUILD_TYPE STREQUAL "Debug")

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

file(GLOB_RECURSE headerses ${PROJECT_SOURCE_DIR}/src/*.hpp)
file(GLOB_RECURSE sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(miko ${sources})

llvm_map_components_to_libnames(llvm_libs support core irreader)
target_link_libraries(miko ${LLVM_LIBRARIES})
