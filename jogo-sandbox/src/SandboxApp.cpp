#include <Jogo.h>

class SandboxApp : public Jogo::Application
{
public:
	SandboxApp() {}

	~SandboxApp() {}
};

Jogo::Application* Jogo::CreateApplication()
{
	return new SandboxApp();
}
