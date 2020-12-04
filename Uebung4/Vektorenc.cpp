#include <iostream>
#include <vector>

void vektorinhalt(std::vector<double> v)
{
	for (int i = 0 ; i < v.size() ; ++i)
		std::cout << v[i] << std::endl;
}

std::vector<double> reversed(const std::vector<double>& v)
{
	std::vector<double> rv(v.size());
	//rv = v;
	for (int i = 0; i < v.size(); ++i)
	{
		rv[v.size()-1-i] = v[i];
	}
	return rv;
}

int main(int argc, char** argv) 
{
	std::pair<double,double> kg;
	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
//	std::vector<double> v3;
	vektorinhalt(reversed(v3));
	return 0;
}

