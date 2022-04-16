cmake_minimum_required(VERSION 3.20)
project(ACM)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#CMAKE_CXX_FLAGS="-Wall -std=c++98"
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
add_executable(ACM main.cpp)
add_executable(NEFU NEFU.cpp)

add_executable(D VP/D.cpp)
add_executable(5 zyx/5.cpp)
add_executable(4 zyx/4.cpp)
add_executable(main main.cpp)