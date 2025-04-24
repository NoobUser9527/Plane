project(Plane)


file(GLOB_RECURSE PLANE_SOURCES "src/Plane/*.cpp")

add_library(Plane SHARED ${PLANE_SOURCES})

add_subdirectory(external/spdlog)

target_link_libraries(Plane PUBLIC spdlog::spdlog)

target_include_directories(Plane PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_definitions(Plane PRIVATE PLANE_BUILD_DLL)

target_compile_options(Plane PRIVATE -Wall -Wextra -Wpedantic)
