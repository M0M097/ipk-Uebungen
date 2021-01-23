#include <iostream>
#include "point.hh"
#include "canvas.hh"

Point testcenter(0,0);
Canvas testcanvas(testcenter,200,100,400,200);

int main()
{
	if (
	testcanvas.coord(0,0).x() == -100
	and 
	testcanvas.coord(0,0).y() == -50 
	and 
	testcanvas.coord(400,0).x() == 100
	and
	testcanvas.coord(400,0).y() == -50
	and
	testcanvas.coord(0,200).x() == -100
	and
	testcanvas.coord(0,200).y() == 50
	and
	testcanvas.coord(400,200).x() == 100
	and
	testcanvas.coord(400,200).y() == 50)
	
	{ return 0;}
	
	else 
		return 42;
}
