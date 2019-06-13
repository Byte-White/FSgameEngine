#pragma once

#ifdef FS_PLATFORM_WINDOWS
	#ifdef FS_BUILD_DLL
		#define FS_API __declspec(dllexport)
	#else
		#define FS_API __declspec(dllimport)
	#endif // FS_BUILD_DLL
#else
	#error FSgameEngine only supports Windows!
#endif // FS_PLATFORM_WINDOWS
