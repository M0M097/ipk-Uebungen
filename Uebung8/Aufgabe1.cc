#include<iostream>
#include"canvas.hh"
#include"point.hh"
#include"IterationResult.hh"


//IterationResult iterate (Point z, Point c, double threshold, int maxIt)
//{
//	int i = 0;
//	double x = z.x();
//	double y = z.y();
//	double c1 = c.x();
//	double c2 = c.y();
//	Point newz = Point();
//	while((i <= maxIt) and (newz.Betrag() < threshold))
//		{
//			x = x*x - y*y + c1;
//			y = 2 * x*y + c2;
//			newz = Point(x,y);
//			i++;
//		}
//	
//	return IterationResult(newz, i);
//}

IterationResult iterate (Point z, Point c, double threshold, int maxIt)
{
	int i = 0;
	double newx;
	double newy;
	while((i <= maxIt) and (z.Betrag() < threshold))
		{
			newx = z.x() * z.x() - z.y() * z.y() + c.x();
			newy = 2 * z.x() * z.y() + c.y();
			z = Point(newx,newy);
			i++;
		}
	
	return IterationResult(z, i);
}

//
//
//void mandelbrot (Canvas& canvas, double threshold,
//		int maxIt, std::string filename)
//
int main()
{
	Point myc = Point(1,2);
	Point myz = Point();
//	int mynumber = 3;
//	IterationResult myresult = IterationResult(mypoint,mynumber);
	//IterationResult myresult = IterationResult();
	IterationResult myresult = iterate(myz, myc, 10000000, 100);
	std::cout << myresult.lastPoint().Betrag() << std::endl;
	std::cout << myresult.IterationNo() << std::endl;
	return 0;
}
