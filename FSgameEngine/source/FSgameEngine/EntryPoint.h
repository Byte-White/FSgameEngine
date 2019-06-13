#pragma once

#ifdef FS_PLATFORM_WINDOWS

extern fs::Application* fs::CreateApplication();

int main(int argc, char** argv)
{
	auto app = fs::CreateApplication();

	app->Run();
	delete app;
}

#endif