#pragma once

#ifdef FS_PLATFORM_WINDOWS
	#ifdef FS_BUILD_DLL
		#define FS_API __declspec(dllexport)
	#elif defined FS_BUILD_STATIC
		#define FS_API 
	#else
		#define FS_API __declspec(dllimport)
	#endif // FS_BUILD_DLL
#else
	#error FSgameEngine only supports Windows!
#endif // FS_PLATFORM_WINDOWS
