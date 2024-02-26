cmake_minimum_required(VERSION 3.24)
project(CPPWithTests)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPPWithTests_run main.cpp)

include_directories(IsPrime)
add_subdirectory(IsPrime)

target_link_libraries(CPPWithTests_run IsPrime_lib)

add_subdirectory(Tests)
