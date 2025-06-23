#pragma once


#if defined(_WIN32) || defined(_WIN64)
    #ifdef PLANE_BUILD_DLL
        #define PLANE_API __declspec(dllexport)
    #elif defined(PLANE_USE_DLL)
        #define PLANE_API __declspec(dllimport)
    #else
        #define PLANE_API
    #endif
#elif defined(__GNUC__) || defined(__clang__)
    #ifdef PLANE_BUILD_DLL
        #define PLANE_API __attribute__((visibility("default")))
    #else
        #define PLANE_API
    #endif
#else
    #define PLANE_API
#endif



#define BIT(x) (1 << x)

// #ifdef PLANE_ENABLE_ASSERTS
//     #define PLANE_ASSERT(x, ...) { if(!(x)) { PLANE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
//     #define PLANE_CORE_ASSERT(x, ...) { if(!(x)) { PLANE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
// #else
//     #define PLANE_ASSERT(x, ...)
//     #define PLANE_CORE_ASSERT(x, ...)
// #endif // PLANE_ENABLE_ASSERTS

