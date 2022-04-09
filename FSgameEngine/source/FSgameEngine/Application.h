#pragma once

#include "Core.h"
#include "imgui.h"
#include <d3d11.h>
#include <tchar.h>

namespace fs {
	//static LPCTSTR windows_title = _T("My App");
	static ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

	class FS_API Application
	{
	public://variables

	public:
		Application();
		virtual ~Application();
		virtual void Run();

	};
	//To be defined in CLIENT
	Application* CreateApplication();
}
