#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* CreateApplication();

int main(int argc, char** argv)
{
    auto app = CreateApplication();
    app->Run();
    delete app;
}
#endif