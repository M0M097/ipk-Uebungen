#include "point.hh"
#include "canvas.hh"
#include "pgm.hh"
#include <vector>
#include <iostream>


Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels) 
: _horPixels(horPixels), _vertPixels(vertPixels), _height(height), _width(width), _center(center), _pixels(horPixels, std::vector<int>(vertPixels))
{}
	
int Canvas::brightness(int i, int j) const
{
	return _pixels[i][j];
}

void Canvas::setBrightness(int i, int j, int brightness)
{
	_pixels[i][j] = brightness;
}

Point Canvas::coord(int i, int j) const
{
	double i2 = i;
	double j2 = j;
	double xcoord = (_width*(j2/_horPixels)-0.5*_width);
	double ycoord = (_height*(i2/_vertPixels)-0.5*_height);
	return Point(xcoord, ycoord);
}

void Canvas::write(const std::string& filename)
{
	write_pgm(_pixels, filename);
}


