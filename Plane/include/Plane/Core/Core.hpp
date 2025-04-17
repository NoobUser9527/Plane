#pragma once

#ifdef PLANE_PLATFORM_WINDOWS
    #ifdef PLANE_BUILD_DLL
        #define PLANE_API __declspec(dllexport)
    #else
        #define PLANE_API __declspec(dllimport)
    #endif
#else
    #error Plane only supports Windows!
#endif

#define BIT(x) (1 << x)

// #ifdef PLANE_ENABLE_ASSERTS
//     #define PLANE_ASSERT(x, ...) { if(!(x)) { PLANE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
//     #define PLANE_CORE_ASSERT(x, ...) { if(!(x)) { PLANE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
// #else
//     #define PLANE_ASSERT(x, ...)
//     #define PLANE_CORE_ASSERT(x, ...)
// #endif // PLANE_ENABLE_ASSERTS

