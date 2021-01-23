#include <iostream>
#include <cmath>
#include "point.hh"
#include "polygon.hh"

const double pi = M_PI;

std::vector<double> xcoordinate(double n)
{
	std::vector<double> xcoords(n);
	for (double i = 0; i < n; ++i)
	{
		xcoords[i]=std::cos((i/n)*2*pi);
	}
	
	return xcoords;
}

std::vector<double> ycoordinate(double n)
{
	std::vector<double> ycoords(n);
	for (double i = 0; i < n; ++i)
	{
		ycoords[i]=std::sin((i/n)*2*pi);
	}
	
	return ycoords;
}

int main(int argc, char** argv)
{
	//Test für 0 bis 10-Eck 
	std::vector<double> xs;
	std::vector<double> ys;
	for (int i = 0; i <=10; i++)
	{
		xs = xcoordinate(i);
		ys = ycoordinate(i);
		Polygon poly(xs, ys);
		std::cout << "\nAnzahl der Ecken: " << poly.numberofcorners() << std::endl;
		std::cout << "Volumen: " << poly.volume() << std::endl;
	}

	std::cout << "\nTest für überschlagenes Polygon" << std::endl;
	std::vector<double> xsu = {1,2,1,2};
	std::vector<double> ysu = {1,2,2,1};
	Polygon polyu(xsu, ysu);
	std::cout << "Volumen: " << polyu.volume() << std::endl;
	//gibt 0 als Flächeninhalt zurück
	
	return 0;
}
