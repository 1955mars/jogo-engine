#pragma once

#ifdef JG_PLATFORM_WINDOWS
	#ifdef JG_BUILD_DLL
		#define JOGO_API __declspec(dllexport)
	#else
		#define JOGO_API __declspec(dllimport)
	#endif
#else
	#error Jogo Supports Only Windows Platform!

#endif
