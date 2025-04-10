#pragma once

#include "Application.hpp"
#include "Plane/Log.hpp"

#ifdef PLANE_PLATFORM_WINDOWS

extern pl::Application *pl::CreateApplication();

int main(int argc, char **argv)
{
    pl::Log::Init();
    auto app = pl::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

#else
#error Plane only supports Windows!
#endif