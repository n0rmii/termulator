cmake_minimum_required(VERSION 3.20.0)
project(termulator)
add_executable(${PROJECT_NAME} termulator.c ternops.c ternmem.c printb.c)
target_link_libraries(${PROJECT_NAME} m)
