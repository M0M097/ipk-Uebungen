#include "point.hh"
#include <array>
#include <iostream>


int main(int argc, char** argv)
{
	const int dim = 3;

	int random1 = rand()%10;
	int random2 = rand()%10;
	int random3 = rand()%10;

	std::array<int, dim> myarray = {random1, random2, random3};
	Point<int, dim> mypoint(myarray);

	for (int i = 0; i < dim; i++)
	{
		if (mypoint[i] != myarray[i]){
			return 1;
		}
	}
	return 0;
}
