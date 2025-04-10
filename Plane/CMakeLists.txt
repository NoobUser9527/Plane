project(Plane)

file(GLOB_RECURSE PLANE_SOURCES "src/*.cpp")
file(GLOB_RECURSE PLANE_HEADERS "include/*.hpp")

add_library(Plane SHARED ${PLANE_SOURCES} ${PLANE_HEADERS})

add_subdirectory(external/spdlog)

target_link_libraries(Plane PUBLIC spdlog::spdlog)

target_include_directories(Plane PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_definitions(Plane PRIVATE PLANE_PLATFORM_WINDOWS PLANE_BUILD_DLL)

target_compile_options(Plane PRIVATE -Wall -Wextra -Wpedantic)
