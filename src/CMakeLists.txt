add_subdirectory(lib)
add_executable(calculator main.c)
target_link_libraries(calculator lib)
add_test(NAME t5 COMMAND calculator car 5)
