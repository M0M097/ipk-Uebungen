#ifndef POINT_HH
#define POINT_HH
class Point 
{
private:
	double _x;
	double _y;
public:
	// Default Konstruktor
	Point();
	// Konstruktor
	Point(double x, double y);
	// Accessoren
	double x() const;
	double y() const;
};
#endif //POINT_HH
