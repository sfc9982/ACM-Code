cmake_minimum_required(VERSION 3.20)
project(ACM)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#CMAKE_CXX_FLAGS="-Wall -std=c++98"
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
add_executable(ACM main.cpp)

add_executable(NEFU NEFU.cpp)

add_executable(K ACM-DynamicProgramming/K.cpp)


add_executable(A Luogu/Week-2/A.cpp)
add_executable(B Match-220302/B.cpp)
add_executable(C VP/C.cpp)
add_executable(template template.cpp)
add_executable(D Match-220302/D.cpp)
add_executable(E Match-220302/E.cpp)
add_executable(L ACM-DynamicProgramming/L.cpp)
add_executable(M ACM-DynamicProgramming/M.cpp)
add_executable(ocean ocean.cpp)
add_executable(ocean2 ocean2.cpp)
add_executable(seat seat.cpp)
add_executable(cpp cpp.cpp)

add_executable(G Match-220302/G.cpp)

add_executable(F Match-220302/F.cpp)

add_executable(I Luogu/Week-2/I.cpp)
add_executable(CF1641C Luogu/CF1641C.cpp)
add_executable(Gym-103446 Codeforces/Gym-103446.cpp)