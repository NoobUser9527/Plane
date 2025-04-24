#pragma once

#include "Plane/Core/Application.hpp"
#include "Plane/Core/Log.hpp"


extern pl::Application *pl::CreateApplication();

int main(int argc, char **argv)
{
    pl::Log::Init();
    auto app = pl::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

