#include <vector>
#include "polygon.hh"
#include "point.hh"

// Erster Konstruktor 
Polygon::Polygon(const std::vector<Point>& corners) : _corners(corners){};

// Zweiter Konstruktor 
Polygon::Polygon(const std::vector<double>& x, 
		 const std::vector<double>& y
		)
{
	std::vector<Point> corners;
	for (int i; i < (int)x.size(); ++i)
	{
		Point myPoint(x[i], y[i]);
		corners.push_back(myPoint);
	}
	_corners = corners;
};

//Funktion zur Anzahl der Punkte
std::size_t Polygon::numberofcorners() const {
	return (_corners.size());
};

//Funktion die i-te Ecke ausgibt 
const Point& Polygon::icorner(std::size_t i) const {
	return _corners[i];
}

//Funktion Volume
double Polygon::volume() const {
	double A = 0;
	for (int i = 0; i < (int)(_corners.size()-1); ++i)
	{
		A += _corners[i].x() * _corners[i+1].y() - _corners[i+1].x() * _corners[i].y();
	}
	return (A/2);
}
