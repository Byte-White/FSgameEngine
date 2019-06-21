#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace fs {

	class FS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define FS_CORE_TRACE(...)    ::fs::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FS_CORE_INFO(...)     ::fs::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FS_CORE_WARN(...)     ::fs::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FS_CORE_ERROR(...)    ::fs::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FS_CORE_FATAL(...)    ::fs::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define FS_TRACE(...)	      ::fs::Log::GetClientLogger()->trace(__VA_ARGS__)
#define FS_INFO(...)	      ::fs::Log::GetClientLogger()->info(__VA_ARGS__)
#define FS_WARN(...)	      ::fs::Log::GetClientLogger()->warn(__VA_ARGS__)
#define FS_ERROR(...)	      ::fs::Log::GetClientLogger()->error(__VA_ARGS__)
#define FS_FATAL(...)		  ::fs::Log::GetClientLogger()->fatal(__VA_ARGS__)