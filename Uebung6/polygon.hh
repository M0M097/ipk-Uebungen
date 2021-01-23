#ifndef POLYGON_HH
#define POLYGON_HH
#include <vector>
#include "point.hh"

class Polygon
{
private:
	std::vector<Point> _corners;
public:
	// Erster Konstruktor
	Polygon(const std::vector<Point>& corners);

	// Zweiter Konstruktor
	Polygon(const std::vector<double>& x,
		const std::vector<double>& y
	       );

	// Methoden
	std::size_t numberofcorners() const;
	const Point& icorner(std::size_t i) const;
	double volume() const;
};


#endif //POLYGON_HH
