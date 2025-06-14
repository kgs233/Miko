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

# LLVM
find_package(LLVM REQUIRED)

# Antlr4
find_package(ANTLR REQUIRED)

message(STATUS "Found Antlr4 Include in: ${ANTLR_INCLUDE_DIRS}")
message(STATUS "Found Antlr4 Library in: ${ANTLR_LIBRARIES}")
message(STATUS "Found Antlr4 Binary in: ${ANTLR_BINARY}")

execute_process(COMMAND ${ANTLR_BINARY} MikoLexerRules.g4  MikoParserRules.g4 -package Miko -no-visitor -no-listener -o ../src/pre/
                WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/antlr
)

message(STATUS "Found LLVM: ${LLVM_VERSION}")
message(STATUS "Found LLVM_CONFIG in: ${LLVM_CONFIG}")

string(REPLACE "-fno-exceptions" "" LLVM_CXXFLAGS "${LLVM_CXXFLAGS}")
string(STRIP "${LLVM_CXXFLAGS}" LLVM_CXXFLAGS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${LLVM_CXXFLAGS}")
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} ${LLVM_CFLAGS}")

file(GLOB_RECURSE headerses ${PROJECT_SOURCE_DIR}/src/*.hpp)
file(GLOB_RECURSE headerses ${PROJECT_SOURCE_DIR}/src/*.h)
file(GLOB_RECURSE sources ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(miko ${sources})

target_compile_features(miko PUBLIC cxx_std_20)

target_include_directories(miko PRIVATE ${LLVM_INCLUDE_DIRS})
target_include_directories(miko PRIVATE ${ANTLR_INCLUDE_DIRS})

target_link_libraries(miko PRIVATE ${LLVM_LIBRARIES})
target_link_libraries(miko PRIVATE ${ANTLR_LIBRARIES})