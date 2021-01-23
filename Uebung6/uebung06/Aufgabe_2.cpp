#include <iostream>
#include <cmath>
#include <algorithm>
#include "point.hh"
#include "canvas.hh"
#include "pgm.hh"

int main()
{
	double width = 4;
	double height = 3;
	int horPixels = 4000;
	int vertPixels = 3000; 
	Point testcenter(0,0);
	Canvas testcanvas(testcenter, width, height, horPixels, vertPixels);
	
	for (int i = 0; i < 3000; ++i)
	{
		for (int j = 0; j < 4000; ++j)
		{
			double cordx = 1/(testcanvas.coord(i,j).x());
			double cordy = 1/(testcanvas.coord(i,j).y());
			int color = 100*(std::sin(cordx)*std::sin(cordy)+1);
			testcanvas.setBrightness(j,i,std::max(0,color));
		}
	}
	
	testcanvas.write("pgmimg.pgm");
	
	return 0;
}
