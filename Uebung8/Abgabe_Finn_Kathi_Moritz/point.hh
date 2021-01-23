#ifndef POINT_HH
#define POINT_HH

#include<cmath>

class Point {
 public:
  // default constructor
  Point() : _x(0.0), _y(0.0) {}

  // constructor für übergebene Koordinaten
  Point(double x, double y) : _x(x), _y(y) {}

  // Accessors

  double x() const { return _x; }

  double y() const { return _y; }

  double Betrag() const { return _betrag; }
  
 private:
  double _x;
  double _y;
  double _betrag = std::sqrt(_x*_x + _y * _y);
};

#endif  // POINT_HH
