#include "point.hh"

Point::Point() : _x(0), _y(0){}
Point::Point(double a, double b) : _x(a), _y(b){}
double Point::x() const 
{
	return _x;
}
double Point::y() const 
{
	return _y;
}

	

