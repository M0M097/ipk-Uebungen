#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

std::pair<double,double> kleingross(std::vector<double> v)
{
	int ende = v.size() - 1;
	std::sort(v.begin(),v.end());
	return std::make_pair (v[0], v[ende]);
}

int main(int argc, char** argv) 
{
	std::pair<double,double> kg;
	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
	kg = kleingross(v3);
	std::cout << "kleinste Zahl des Vektors: " << kg.first <<  std::endl;
	std::cout << "groesste Zahl des Vektors: " << kg.second << std::endl;
	return 0;
}

