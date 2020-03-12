#include <iostream>
#include "Speed.h"
#include "Generator.h"
#include "Sorting.h"

int main()
{
	auto vec = Data::GenerateNumbers(1000);
	std::cout << "El tiempo de ejecucion de bubble sort fue: " << TimeSpan::TimeElapsed(Sorting::BubbleSort, vec) << " milisegundos." << std::endl;
	return 0;	
}