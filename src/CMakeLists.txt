add_subdirectory(lib)
add_executable(calculator main.c)
target_link_libraries(calculator lib)
add_test(t5 src/calculator car 5) # Doit retourner 25
