#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}

private:

};

Hazel::Application* CreateApplication()
{
	return new Sandbox();
}