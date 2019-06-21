#pragma once

#ifdef FS_PLATFORM_WINDOWS

extern fs::Application* fs::CreateApplication();

int main(int argc, char** argv)
{
	fs::Log::Init();

	FS_CORE_WARN("Intialized Logger!");

	auto app = fs::CreateApplication();

	app->Run();
	delete app;
}

#endif