#ifndef POINT_HH
#define POINT_HH

// class Point
class Point{
private:
	double _x;
	double _y;
public:
	Point();
	Point(double a, double b);
	double x() const;
	double y() const;
};

#endif  // POINT_HH
