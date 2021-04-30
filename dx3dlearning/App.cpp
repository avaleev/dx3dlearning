#include "App.h"
#include <iomanip>

App::App() : wnd(800, 600, "Learning DirectX 3D") {}

int App::Go() {
	while (true) {
		if (const auto ecode = Window::ProcessMessages()) {
			return *ecode;
		}

		DoFrame();
		Sleep(1); // Temporary fix
	}
}

void App::DoFrame() {
	const float t = timer.Peek();
	std::ostringstream oss;
	oss << "Time elapsed: " << std::setprecision(1) << std::fixed << t << "s";
	wnd.SetTitle(oss.str());
}
