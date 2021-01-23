#include "io.hh"
#include "statistics.hh"

#include <iostream>
#include <vector>

int main(int argc, char** argv) 
{
	std::vector<double> v;
	v = read_vector();
	std::cout << "Mittelwert: " <<  mean(v) << std::endl;
	std::cout << "Median: " <<  median(v) << std::endl;
	std::cout << "statistisches Moment: " << moment(v, 3) << std::endl;
	std::cout << "Standardabweichung: " << standard_deviation(v) << std::endl;
	return 0;
}

