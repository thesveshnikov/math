cmake_minimum_required(VERSION 3.31)
project(math C)

set(CMAKE_C_STANDARD 11)

add_executable(math main.c arithmetic_operations/sum.c arithmetic_operations/subtraction.c arithmetic_operations/multiplication.c arithmetic_operations/division.c)
