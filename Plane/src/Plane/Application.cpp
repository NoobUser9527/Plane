#include "Plane/Application.hpp"

#include <iostream>
#include <thread>
#include <chrono>

#include "Plane/Log.hpp"

namespace pl
{

    Application::Application()
    {
        spdlog::info("Application created");
    }

    Application::~Application()
    {
        spdlog::info("Application destroyed");
    }

    void Application::Run()
    {
        while (true)
        {
            // spdlog::info("Application running");
            PL_CORE_TRACE("Application running");
            PL_CLIENT_TRACE("Application running");

            

            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }

}
