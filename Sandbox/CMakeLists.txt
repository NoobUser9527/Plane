project(Sandbox)

file(GLOB_RECURSE SANDBOX_SOURCES "src/*.cpp")

add_executable(Sandbox ${SANDBOX_SOURCES})

# 链接 Plane 库
add_dependencies(Sandbox Plane)
target_include_directories(Sandbox PRIVATE ${CMAKE_SOURCE_DIR}/Plane/include)
target_link_libraries(Sandbox PRIVATE Plane)

# 编译选项
target_compile_definitions(Sandbox PRIVATE)
target_compile_options(Sandbox PRIVATE -Wall -Wextra -Wpedantic)

# Windows 下复制 DLL 到可执行文件目录
if(WIN32)
    add_custom_command(TARGET Sandbox POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_BINARY_DIR}/Plane/Plane.dll"
        $<TARGET_FILE_DIR:Sandbox>
    )
endif()

# Linux 下设置 RPATH，确保运行时能找到 libPlane.so
if(UNIX)
    set_target_properties(Sandbox PROPERTIES
        BUILD_RPATH "$ORIGIN"
    )
endif()
