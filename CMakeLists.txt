cmake_minimum_required(VERSION 3.17)
project(hello_github_action)

set(CMAKE_CXX_STANDARD 20)

add_executable(hello_github_action main.cpp)

install(TARGETS hello_github_action DESTINATION debug CONFIGURATIONS Debug)
install(TARGETS hello_github_action DESTINATION release CONFIGURATIONS Release)
