#include <Malb.h>

class Sandbox : public Malb::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Malb::Application* Malb::CreateApplication()
{
	return new Sandbox();
}