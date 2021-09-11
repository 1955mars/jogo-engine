#include "Application.h"
#include "Log.h"
#include "Events/KeyEvent.h"
#include "Events/ApplicationEvent.h"
#include "Events/MouseEvent.h"

namespace Jogo
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		KeyPressedEvent e(1, 0);
		JG_CORE_INFO(e);

		AppTickEvent e1;
		JG_CORE_INFO(e1);

		MouseButtonPressedEvent e3(1);
		JG_CORE_INFO(e3);

		while(true){}
	}
}
