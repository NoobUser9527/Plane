#include <Plane.hpp>
// #include <iostream>

class SandboxApp : public pl::Application
{
public:
    SandboxApp()
    {
        // std::cout << "SandboxApp created" << std::endl;
    }

    virtual ~SandboxApp() override
    {
        // std::cout << "SandboxApp destroyed" << std::endl;
    }
};

pl::Application *pl::CreateApplication()
{
    return new SandboxApp();
}
