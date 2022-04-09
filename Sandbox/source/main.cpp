#include"FSgameEngine.h"

class Sandbox : public fs::Application
{
public:
	Sandbox() 
	{
		
	}
	~Sandbox() 
	{
		
	}
	void Run() override
	{
		ImGui::Begin("Hi");
		ImGui::Button("Say Hi");
		ImGui::End();
	}
};

fs::Application* fs::CreateApplication()
{
	return new Sandbox();
}