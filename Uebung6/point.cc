#include "point.hh"

// Erster Konstruktor 
Point::Point() : _x(0), _y(0){};
// Zweiter Konstruktor
Point::Point(double x, double y) : _x(x), _y(y){};
// Accessor x
double Point::x() const
{
	return _x;
}
// Accessor y
double Point::y() const
{
	return _y;
}
