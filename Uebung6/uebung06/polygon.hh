#ifndef POLYGON_HH
#define POLYGON_HH

#include <vector>

// class Polygon

class Polygon{
private:
	std::vector<Point> _corners;
	std::vector<double> _x;
	std::vector<double> _y;
	mutable double _volume;
public:
	Polygon(const std::vector<Point>& corners);
	Polygon(const std::vector<double>& x, const std::vector<double>& y);
	std::size_t corners() const;
	const Point& corner(std::size_t i) const;
	double volume() const;
};

#endif  // POLYGON_HH
