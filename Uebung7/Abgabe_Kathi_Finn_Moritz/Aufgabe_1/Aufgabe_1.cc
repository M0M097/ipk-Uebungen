#include "point.hh"
#include <array>
#include <iostream>


int main(int argc, char** argv)
{
	const int dim = 5;
	std::array<int, dim> myarray = {1,2,3,4,5};
	Point<int, dim> orign;
	Point<int, dim> mypoint(myarray);

	std::cout << "\norign:" << std::endl;
	for ( int i = 0; i < dim ; i++)
	{
		std::cout << orign[i] << std::endl;
	}
	std::cout << "norm: " << std::endl;
	std::cout << orign.norm() << std::endl;

	std::cout << "\nmypoint:" << std::endl;
	for ( int i = 0; i < dim; i++)
	{
		std::cout << mypoint[i] << std::endl;
	}
	std::cout << "norm: " << std::endl;
	std::cout << mypoint.norm() << std::endl;

	return 0;
}
