#include "App.h"
#include <iomanip>

App::App() : wnd(800, 600, "Learning DirectX 3D") {}

int App::Go() {
	while (true) {
		if (const auto ecode = Window::ProcessMessages()) {
			return *ecode;
		}

		DoFrame();
	}
}

void App::DoFrame() {
	const float c = sin(timer.Peek()) / 2.0f + 0.5f;
	wnd.Gfx().ClearBuffer(c, c, 1.0f);
	wnd.Gfx().DrawTestTriangle();
	wnd.Gfx().EndFrame();
}
