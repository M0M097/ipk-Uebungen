#include <iostream>
#include <algorithm>
#include <vector>

void vektorinhalt(std::vector<double> v)
{
	for (int i = 0 ; i < v.size() ; ++i)
		std::cout << v[i] << std::endl;
}

std::vector<double> reversed(std::vector<double>& v)
{
	//rv = v;
	for (int i = 0; i < (v.size()/2); ++i)
		std::swap(v[i],v[v.size()-1-i]);
	return v;
}

int main(int argc, char** argv) 
{
	std::pair<double,double> kg;
	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
	//std::vector<double> v3 = {{ 3, 8, 7, 9, 2 }};
	vektorinhalt(reversed(v3));
	return 0;
}

