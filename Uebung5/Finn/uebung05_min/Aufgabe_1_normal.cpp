#include <iostream>
#include "io.hh"
#include "statistics.hh"

int main(int argc, char** argv)
{
	//arguments for normal_distribution
	int seed = random_seed(); 
	int N; 
	double avg; 
	double std_dev;
	
	//read arguments for normal_distribution 
	std::cout << "seed chosen randomly " << std::endl;
	std::cout << "N = " << std::flush;
	std::cin >> N;
	std::cout << "Average = " << std::flush;
	std::cin >> avg;
	std::cout << "Standard deviation = " << std::flush;
	std::cin >> std_dev;
	
	//read vector
	std::vector<double> myvector = normal_distribution(seed, N, avg, std_dev);
	
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
	//std::cout << "std_dev = " << standard_deviation(myvector) << std::endl;
	
	//return std_dev
	std::cout << "std_dev = " << std_dev << std::endl;
	
	return 0;
}
