#include <iostream>
#include "io.hh"
#include "statistics.hh"
#include <cassert> //for assert

double test(std::vector<double> v, double correct)
{
	double test_val=median(v);
	
	if (std::abs(test_val - correct) < 1e-10)
	{
		return 0;
	}
	else 
	{
		return 42;
	}
}

int main()
{
	std::vector<double> vec1 = {};
	std::vector<double> vec2 = {1,2,3,4};
	std::vector<double> vec3 = {1,2,3,4,5};

	assert(test(vec1,0) == 0 and test(vec2,2.5) == 0 and test(vec3,3) == 0);
	
	return 0;
	
	/*
	if (test(vec1,0) == 0 and test(vec2,2.5) == 0 and test(vec3,3) == 0)
	{
		return 0;
	}
	
	else
	{
		return 42;
	}*/
}
