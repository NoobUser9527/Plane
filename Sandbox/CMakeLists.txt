project(Sandbox)

file(GLOB_RECURSE SANDBOX_SOURCES "src/*.cpp")

add_executable(Sandbox ${SANDBOX_SOURCES})


add_custom_target(copy_plane_dll ALL
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${CMAKE_BINARY_DIR}/Plane/Plane.dll"
    $<TARGET_FILE_DIR:Sandbox>
)

add_dependencies(copy_plane_dll Plane)

add_dependencies(Sandbox Plane)


target_include_directories(Sandbox PRIVATE ${CMAKE_SOURCE_DIR}/Plane/include)
target_link_libraries(Sandbox PRIVATE Plane)

target_compile_definitions(Sandbox PRIVATE PLANE_PLATFORM_WINDOWS)
target_compile_options(Sandbox PRIVATE -Wall -Wextra -Wpedantic)
