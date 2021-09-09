#pragma once

#ifdef JG_PLATFORM_WINDOWS

extern Jogo::Application* Jogo::CreateApplication();

int main()
{
	printf("Hello JoGo!");
	auto app = Jogo::CreateApplication();
	app->Run();
	delete app;
}

#endif
