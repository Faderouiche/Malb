#pragma once

#ifdef MB_PLATFORM_WINDOWS

extern Malb::Application* Malb::CreateApplication();

int main(int argc, char** argv)
{
	printf("Malb Engine\n");
	auto app = Malb::CreateApplication();
	app->Run();
	delete app;
}

#endif
