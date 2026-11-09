cmake_minimum_required(VERSION 3.10)
project(Sculptor)

set(CMAKE_CXX_STANDARD 17)

# Criar o executável (mostrafloat.cpp fica de fora: é um programa separado)
add_executable(sculptor main.cpp sculptor.cpp)
