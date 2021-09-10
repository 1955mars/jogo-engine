#pragma once

#ifdef JG_PLATFORM_WINDOWS

extern Jogo::Application* Jogo::CreateApplication();

int main()
{
	Jogo::Log::Init();

	JG_CORE_ERROR("Initialized Jogo! Var = {0}", 10);
	JG_WARN("Initialized Cleint! Var = {0}", 12);

	printf("Hello JoGo!");
	auto app = Jogo::CreateApplication();
	app->Run();
	delete app;
}

#endif
