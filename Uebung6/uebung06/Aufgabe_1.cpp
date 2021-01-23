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

int main()
{
	//Test für verschiedene Polygone
	std::vector<double> xs4 = xcoordinate(4);
	std::vector<double> ys4 = ycoordinate(4);
	Polygon poly4(xs4, ys4);
	std::cout << poly4.volume() << std::endl;

	std::vector<double> xs6 = xcoordinate(6);
	std::vector<double> ys6 = ycoordinate(6);
	Polygon poly6(xs6, ys6);
	std::cout << poly6.volume() << std::endl;
	
	std::vector<double> xs8 = xcoordinate(8);
	std::vector<double> ys8 = ycoordinate(8);
	Polygon poly8(xs8, ys8);
	std::cout << poly8.volume() << std::endl;
	
	
	//Test für überschlagenes Polygon
	std::vector<double> xsu = {1,2,1,2};
	std::vector<double> ysu = {1,2,2,1};
	Polygon polyu(xsu, ysu);
	std::cout << polyu.volume() << std::endl;
	//gibt 0 als Flächeninhalt zurück
	
	return 0;
}
