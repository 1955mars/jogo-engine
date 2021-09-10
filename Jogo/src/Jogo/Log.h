#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Jogo
{
	class JOGO_API Log
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

#define JG_CORE_TRACE(...)		::Jogo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define JG_CORE_INFO(...)		::Jogo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define JG_CORE_WARN(...)		::Jogo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define JG_CORE_ERROR(...)		::Jogo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define JG_CORE_FATAL(...)		::Jogo::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define JG_TRACE(...)		::Jogo::Log::GetClientLogger()->error(__VA_ARGS__)
#define JG_INFO(...)		::Jogo::Log::GetClientLogger()->info(__VA_ARGS__)
#define JG_WARN(...)		::Jogo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define JG_ERROR(...)		::Jogo::Log::GetClientLogger()->error(__VA_ARGS__)
#define JG_FATAL(...)		::Jogo::Log::GetClientLogger()->fatal(__VA_ARGS__)



