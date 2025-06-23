project(Sandbox)

file(GLOB_RECURSE SANDBOX_SOURCES "src/*.cpp")

add_executable(Sandbox ${SANDBOX_SOURCES})

add_dependencies(Sandbox Plane)
target_include_directories(Sandbox PRIVATE ${CMAKE_SOURCE_DIR}/Plane/include)
target_link_libraries(Sandbox PRIVATE Plane)

target_compile_definitions(Sandbox PRIVATE)
target_compile_options(Sandbox PRIVATE -Wall -Wextra -Wpedantic)

if(WIN32)
    add_custom_command(TARGET Sandbox POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_BINARY_DIR}/Plane/Plane.dll"
        $<TARGET_FILE_DIR:Sandbox>
    )
endif()

if(UNIX)
    set_target_properties(Sandbox PROPERTIES
        BUILD_RPATH "$ORIGIN"
    )
endif()
