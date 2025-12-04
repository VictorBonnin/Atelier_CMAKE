cmake_minimum_required(VERSION 3.5)
project(calculator C)
include_directories(include)

add_subdirectory(src)
enable_testing()

add_test(NAME t1 COMMAND calculator add 2 3)
add_test(NAME t2 COMMAND calculator sub 3 -2)
add_test(NAME t3 COMMAND calculator mul 5 5)
add_test(NAME t4 COMMAND calculator div 1 5)
