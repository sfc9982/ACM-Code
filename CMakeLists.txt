cmake_minimum_required(VERSION 3.20)
project(ACM)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")
#CMAKE_CXX_FLAGS="-Wall -std=c++98"
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
add_executable(ACM main.cpp)

add_executable(NEFU NEFU.cpp)

add_executable(A ACM-BinarySearch/A.cpp)
add_executable(template template.cpp)
add_executable(F ACM-BinarySearch/F.cpp)
add_executable(G ACM-DataStructure/G.cpp)
add_executable(D ACM-BinarySearch/D.cpp)
add_executable(I ACM-DataStructure/I.cpp)

add_executable(C ACM-BinarySearch/C.cpp)
add_executable(B ACM-BinarySearch/B.cpp)

add_executable(E ACM-BinarySearch/E.cpp)

add_executable(H ACM-DataStructure/H.cpp)


add_executable(K ACM-DataStructure/K.cpp)
add_executable(L ACM-DataStructure/L.cpp)
