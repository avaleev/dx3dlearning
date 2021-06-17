#pragma once

#include "Window.h"
#include "DeviantTimer.h"

class App {
public:
	App();
	~App();
	int Go();
private:
	void DoFrame();

	Window wnd;
	DeviantTimer timer;
	std::vector<std::unique_ptr<class Box>> boxes;
};
