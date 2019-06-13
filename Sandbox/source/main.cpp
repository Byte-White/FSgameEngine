#include<FSgameEngine.h>

class Sandbox : public fs::Application
{
public:
	Sandbox() 
	{
	
	}
	~Sandbox() 
	{
	
	}
};

fs::Application* fs::CreateApplication()
{
	return new Sandbox();
}