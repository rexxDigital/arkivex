cmake_minimum_required(VERSION 3.7)

project(ARKIVEX)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})

add_executable(ARKIVEX main.c)

target_link_libraries(ARKIVEX ${SDL2_LIBRARIES})
