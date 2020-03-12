#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H
#include <vector>

namespace Sorting
{
	void BubbleSort(std::vector<unsigned int>& arreglo)
	{
		bool swap = true;
		while (swap)
		{
			swap = false;
			for (size_t i = 0; i < arreglo.size() - 1; i++)
			{
				if (arreglo[i] > arreglo[i + 1])
				{
					arreglo[i]      ^= arreglo[i + 1];
					arreglo[i + 1]  ^= arreglo[i];
					arreglo[i]      ^= arreglo[i + 1];
					swap = true;
				}
			}
		}
	}

	void SelectionSort(std::vector<unsigned int>& arreglo)
	{
		//To do
	}

	void InsertionSort(std::vector<unsigned int>& arreglo)
	{
		//To do
	}

	void ShellSort(std::vector<unsigned int>& arreglo)
	{
		//To do
	}

	void QuickSort(std::vector<unsigned int>& arreglo)
	{
		//To do
	}
}

#endif
