#include "hzpch.h"
#include "Application.h"

#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"


namespace Hazel{

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{



		while (true) //һ������ѭ����Ӧ�ó���
		{
			m_Window->OnUpdate();
		}

	}

}

