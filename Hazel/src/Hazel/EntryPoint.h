#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

	void main(int argc, char** argv)
	{ 
		Hazel::Log::Init();
		HZ_CORE_TRACE("Initialized Log!");
		int a = 5;
		HZ_INFO("Hello! var = {0}",a);

		auto app = Hazel::CreateApplication();
		app->Run();
		delete app;
	}

#endif // HZ_PLATFORM_WINDOWS 
