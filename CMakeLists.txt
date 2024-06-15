cmake_minimum_required(VERSION 3.20)

project("Miko"
        LANGUAGES CXX
        DESCRIPTION "A New Language"
        VERSION 0.0.0)

set(EXPORT_COMPILE_COMMANDS on)

file(GLOB_RECURSE headerses ${PROJECT_SOURCE_DIR}/src/*.hpp)
file(GLOB_RECURSE sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(miko ${sources})
target_compile_features(miko PUBLIC cxx_std_23)