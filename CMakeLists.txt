cmake_minimum_required(VERSION 3.20)
project(ACM)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#CMAKE_CXX_FLAGS="-Wall -std=c++98"
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
add_executable(ACM main.cpp)
add_executable(NEFU NEFU.cpp)

add_executable(D 2022-C-Homework/HW-MultiDim-Array/D.cpp)
add_executable(main main.cpp)
add_executable(sum zyx/sum.cpp)
add_executable(prime_eratosthenes Templates_Code/prime_eratosthenes.cpp)
add_executable(prime_euler Templates_Code/prime_euler.cpp)
add_executable(qpow qpow.cpp)
add_executable(matrix matrix.cpp)
add_executable(HDU-1159 HDU-1159.cpp)
add_executable(zyx zyx.cpp)
add_executable(A CTF/CISCN/A.cpp)
add_executable(B 2022-C-Homework/HW-Pointer/B.cpp)
add_executable(C "Codeforces/#551 Div2/C.cpp")
add_executable(Reverse CTF/Reverse.cpp)
add_executable(id zyx/id.cpp)

add_executable(linked_list Templates_Code/linked_list.cpp)
add_executable(zzr Classmates-Shitty-Code/zzr.cpp)
add_executable(yhm Classmates-Shitty-Code/yhm.cpp)

add_executable(E 2023-Competition/E.cpp)
add_executable(F 2023-Competition/F.cpp)

add_executable(wyc Classmates-Shitty-Code/wyc.cpp)

add_executable(H 2023-Competition/H.cpp)

add_executable(G 2023-Competition/G.cpp)