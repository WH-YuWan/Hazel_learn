#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Hazel
{
	class  Layer
	{
	public: 
		Layer(const std::string& name = "Layer");
		virtual ~Layer();

		virtual void OnAttach(){}
		virtual void OnDetach() {}
		virtual void OnUpdate() {}
		virtual void OnImGuiRender(){}
		virtual void OnEvent(Event& event) {}

		inline std::string GetName() const { return m_DebugName; }
	protected:
		std::string m_DebugName;

	};


}

