#ifndef IterationResult_HH
#define IterationResult_HH 

#include"point.hh"

class IterationResult {
 public:
  // default constructor
  IterationResult() : _point(Point(0,0)), _iterationNo(0) {}

  // constructor für übergebene Koordinaten
  IterationResult(Point myPoint, int IterationNo) : _point(myPoint), _iterationNo(IterationNo) {}

  // Accessors

  Point lastPoint() const { return _point; }

  int IterationNo() const { return _iterationNo; }
 private:
  Point _point;
  int _iterationNo;
};

#endif  // IterationResult_HH
