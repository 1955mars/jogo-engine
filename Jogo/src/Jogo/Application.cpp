#include "Application.h"
#include "Log.h"
#include "Events/KeyEvent.h"
#include "Events/ApplicationEvent.h"
#include "Events/MouseEvent.h"

#include "GLFW/glfw3.h"

namespace Jogo
{
	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
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

		while(m_Running)
		{
			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}
}
