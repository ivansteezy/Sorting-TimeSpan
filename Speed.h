#ifndef SPEED_H
#define SPEED_H

#include <functional>
#include <chrono>
#include <vector>

namespace TimeSpan
{
	auto TimeElapsed(std::function<void(std::vector<unsigned int>&)> sortingMethod, std::vector<unsigned int>& unsortedVector)
	{
		auto begin = std::chrono::high_resolution_clock::now();
		sortingMethod(unsortedVector);
		auto end = std::chrono::high_resolution_clock::now();

		return std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
	}
}

#endif
