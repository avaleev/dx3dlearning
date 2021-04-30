#pragma once

#include "Window.h"
#include "DeviantTimer.h"

class App {
public:
	App();
	int Go();
private:
	void DoFrame();

	Window wnd;
	DeviantTimer timer;
};
