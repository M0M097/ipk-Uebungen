#include <iostream>
#include "io.hh"
#include "statistics.hh"

int main(int argc, char** argv)
{
	//arguments for uniform_distribution
	int seed = random_seed(); 
	int N; 
	double min; 
	double max;
	
	//read arguments for uniform_distribution 
	std::cout << "seed chosen randomly " << std::endl;
	std::cout << "N = " << std::flush;
	std::cin >> N;
	std::cout << "min = " << std::flush;
	std::cin >> min;
	std::cout << "max = " << std::flush;
	std::cin >> max;
	
	//read vector
	std::vector<double> myvector = uniform_distribution(seed, N, min, max);
	
	//print vector
	/*for (auto entry : myvector)
	{
		std::cout << entry << std::endl;
	}*/
	
	//call mean function
	std::cout << "mean " << mean(myvector) << std::endl;
	
	//call median function
	std::cout << "median " << median(myvector) << std::endl;
	
	//call moment function
	int k;
	std::cout << "k = " << std::flush;
	std::cin >> k;
	std::cout << "moment " << moment(myvector, k) << std::endl;
	
	//call standard_deviation function
	std::cout << "std_dev = " << standard_deviation(myvector) << std::endl;
	
	return 0;
}
