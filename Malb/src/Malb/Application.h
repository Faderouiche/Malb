#pragma once

#include "Core.h"

namespace Malb {

	class MALB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	Application* CreateApplication();

}


