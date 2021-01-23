#include "point.hh"
#include "polygon.hh"
#include <vector>
#include <iostream>

Polygon::Polygon(const std::vector<Point>& corners) : _corners(corners)
{}

Polygon::Polygon(const std::vector<double>& x, const std::vector<double>& y) : _x(x), _y(y)
{
	for (unsigned int i = 0; i < x.size(); ++i)
	{
		_x[i]=x[i];
		_y[i]=y[i];
	}
	
	double lastx = _x.front();
	double lasty = _y.front();
	_x.push_back(lastx);
	_y.push_back(lasty);
	
}

std::size_t Polygon::corners() const {return _corners.size();}

const Point& Polygon::corner(std::size_t i) const {return _corners[i];}

double Polygon::volume() const
{
	
	for (unsigned int i = 0; i < _x.size(); ++i)
	{
		_volume += (_x[i]*_y[i+1])-(_x[i+1]*_y[i]);
	}
	
	if (_x.size() < 3)
	{
		return 0;
	}
	
	else
	{
		return _volume/2;
	}

}
