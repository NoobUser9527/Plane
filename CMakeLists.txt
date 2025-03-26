cmake_minimum_required(VERSION 3.10)

project(Plane VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra -pedantic)

set(SOURCES "Sandbox/main.cpp")
add_executable(Plane ${SOURCES})

target_include_directories(Plane PRIVATE include)
target_link_libraries(Plane PRIVATE)

# add_library(NCD_VUM2TBX_DUM SHARED
# ${PRJ_SOMEIP_GEN_SRCS}
# ${PRJ_SRCS}
# )

# target_link_libraries(NCD_VUM2TBX_DUM
# CommonAPI
# CommonAPI-SomeIP
# )