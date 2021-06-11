#include "App.h"
#include <sstream>

int CALLBACK WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE pRrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow
) {
	try {
		return App{}.Go();
	}
	catch (const ExceptionHandler& e) {
		SetWindowLongPtr(GetActiveWindow(), GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&DefWindowProc));
		MessageBox(nullptr, e.what(), e.GetType(), MB_OK | MB_ICONEXCLAMATION);
	}
	catch (const std::exception& e) {
		SetWindowLongPtr(GetActiveWindow(), GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&DefWindowProc));
		MessageBox(nullptr, e.what(), "Standard Exception", MB_OK | MB_ICONEXCLAMATION);
	}
	catch (...) {
		SetWindowLongPtr(GetActiveWindow(), GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&DefWindowProc));
		MessageBox(nullptr, "No detaild available", "Unknown Exception", MB_OK | MB_ICONEXCLAMATION);
	}

	return -1;
}
