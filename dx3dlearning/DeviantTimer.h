#pragma once
#include <chrono>

class DeviantTimer {
public:
	DeviantTimer();
	float Mark();
	float Peek() const;
private:
	std::chrono::steady_clock::time_point last;
};
