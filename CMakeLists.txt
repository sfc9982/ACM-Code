cmake_minimum_required(VERSION 3.20)
project(ACM)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")
#CMAKE_CXX_FLAGS="-Wall -std=c++98"
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
add_executable(ACM main.cpp)

add_executable(NEFU NEFU.cpp)

add_executable(K ACM-DynamicProgramming/K.cpp)


add_executable(A ACM-DynamicProgramming/A.cpp)
add_executable(B ACM-DynamicProgramming/B.cpp)
add_executable(C ACM-DynamicProgramming/C.cpp)
add_executable(template template.cpp)