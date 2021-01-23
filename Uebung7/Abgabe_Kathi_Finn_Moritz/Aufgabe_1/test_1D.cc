#include "point.hh"
#include <array>
#include <iostream>


int main(int argc, char** argv)
{
	const int dim = 1;
	int random = rand()%10;
	std::array<int, dim> myarray = {random};
	Point<int, dim> mypoint(myarray);

	for (int i = 0; i < dim; i++)
	{
		if (mypoint[i] != myarray[i]){
			return 1;
		}
	}
	return 0;
}

