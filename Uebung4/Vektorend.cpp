#include <iostream>
#include <vector>
#include <cmath>

void vektorinhalt(std::vector<double> v)
{
	for (int i = 0 ; i < v.size() ; ++i)
		std::cout << v[i] << std::endl;
}


std::vector<double> roundedv(std::vector<double> v)
{
	std::vector<double> rv(v.size());
	for (int i = 0; i < v.size(); ++i)
	{
		rv[i] = std::round(v[i]);
	}
	return rv;
}

int main(int argc, char** argv) 
{
	std::pair<double,double> kg;
	std::vector<double> v3 = {{ 3.3, 8.8, 7.7, 5.5, 9.9, 2.2 }};
	vektorinhalt(roundedv(v3));
	return 0;
}

