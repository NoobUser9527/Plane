#include "plpch.hpp"

#include "Plane/Core/Core.hpp"
#include "Plane/Events/Event.hpp"

namespace pl {
    
    struct WindowProps {
        std::string Title;
        uint32_t Width;
        uint32_t Height;

        WindowProps(const std::string& title = "Plane Engine",
                    uint32_t width = 1280,
                    uint32_t height = 720)
            : Title(title), Width(width), Height(height) {}
    };


    class PLANE_API WindowProps{
    public:
        using EventCallbackFn = std::function<void(Event&)>;
        virtual ~WindowProps() = default;

        virtual void OnUpdate() = 0;

        virtual uint32_t GetWidth() const = 0;
        virtual uint32_t GetHeight() const = 0;

        virtual void SetEventCallback(const EventCallbackFn& callback) = 0;

        virtual void SetVSync(bool enabled) = 0;
        virtual bool IsVSync() const = 0;

        virtual void* GetNativeWindow() const = 0;

        static WindowProps* Create(const WindowProps& props);
    }
}