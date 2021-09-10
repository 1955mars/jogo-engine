#pragma once
#include "Core.h"

namespace Jogo
{
	class  JOGO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in Client
	Application* CreateApplication();
}


