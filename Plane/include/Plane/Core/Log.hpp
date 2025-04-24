#pragma once

#include "Plane/Core/Core.hpp"
#include <spdlog/spdlog.h>


namespace pl
{
    class PLANE_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}



#define PL_CORE_TRACE(...)   ::pl::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PL_CORE_INFO(...)    ::pl::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PL_CORE_WARN(...)    ::pl::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PL_CORE_ERROR(...)   ::pl::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PL_CORE_FATAL(...)   ::pl::Log::GetCoreLogger()->fatal(__VA_ARGS__)


#define PL_CLIENT_TRACE(...) ::pl::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PL_CLIENT_INFO(...)  ::pl::Log::GetClientLogger()->info(__VA_ARGS__)
#define PL_CLIENT_WARN(...)  ::pl::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PL_CLIENT_ERROR(...) ::pl::Log::GetClientLogger()->error(__VA_ARGS__)
#define PL_CLIENT_FATAL(...) ::pl::Log::GetClientLogger()->fatal(__VA_ARGS__)


