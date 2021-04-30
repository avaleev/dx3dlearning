#include "DeviantTimer.h"

using namespace std::chrono;

DeviantTimer::DeviantTimer() : last(steady_clock::now()) {}

float DeviantTimer::Mark() {
	const auto old = last;
	last = steady_clock::now();
	const duration<float> frameTime = last - old;

	return frameTime.count();
}

float DeviantTimer::Peek() const {
	return duration<float>(steady_clock::now() - last).count();
}
