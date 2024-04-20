#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* CreateApplication();

int main(int argc, char** argv)
{
    Hazel::Log::Init();
    HZ_CORE_WARN("Initailzed Log");
    HZ_INFO("Hello!");

    auto app = CreateApplication();
    app->Run();
    delete app;
}
#endif