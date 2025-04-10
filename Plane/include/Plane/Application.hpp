#pragma once

#include "Core.hpp"

namespace pl {
    class PLANE_API Application {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // To be defined in CLIENT
    Application* CreateApplication();
}
