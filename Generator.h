#ifndef GENERATOR_H
#define GENERATOR_H
#include <random>

namespace Data
{
	std::vector<unsigned int> GenerateNumbers(const std::size_t& size)
	{
		std::vector<unsigned int> numbers;
		numbers.reserve(size);
		std::generate_n(std::back_inserter(numbers), size, std::rand);

		return numbers;
	}
}

#endif