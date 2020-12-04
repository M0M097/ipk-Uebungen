#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>

//liest Inputfile
std::vector<std::array<double, 2>> read_points_from_file(std::string filename)
{
	std::vector<std::array<double, 2>> points;
	std::array<double, 2> xy;
	std::ifstream input(filename);
	double x, y;
	while (input >> x >> y)
	{
		xy = {x,y};
		points.push_back(xy);
	}
	return points;
}

//Schreibt outputfile
void write_points_to_file(std::string filename, std::vector<std::array<double, 2>>& points)
{
	int end = points.size();
	std::ofstream output;
	output.open(filename);
	for (int i = 0; i < end; ++i)
	{
		output << points[i][0] << " " << points[i][1] << std::endl;
	//	std::cout << points[i][0] << " " << points[i][1] << std::endl;
	}
	output.close();
}



bool sort_by_y(std::array<double, 2> a, std::array<double, 2> b)
{
	if (a[1] < b[1] or (a[1] == b[1] and a[0] < b[0]))
	{
		return true;
	}
	return false;
}

bool sort_by_angle(std::array<double, 2> a, std::array<double, 2> b)
{
	if (a[0] * b[1] - (a[1] * b[0]) > 0)
	{
		return true;
	}
	if (a[0] * b[1] - a[1] * b [0] == 0 and std::abs(a[0])> std::abs(b[0]))
	{
		return true;
	}
	return false;
}

 std::vector<std::array<double, 2>> graham_scan(std::vector<std::array<double, 2>>& points)
{
	int end = points.size();
	std::vector<std::array<double, 2>> hull;// = {points[0]} ; //Vektor der Eckpunkte
	double xA;
	double yA;
	double xB;
	double yB;
	double xC;
	double yC;
	double lage;

	for(int i = 0; i < end ;++i)
	{
		xA = points[i-1][0];
		yA = points[i-1][1];
		xB = points[i+1][0];
		yB = points[i+1][1];
		xC = points[i][0];
		yC = points[i][1];
		lage = (xB - xA)*(yC - yA)-(xC-xA)*(yB-yA); //links oder rechts?
		if (lage <= 0)
		{
			hull.push_back(points[i]);
		}
	}

	return hull;
}


void convex_hull(std::vector<std::array<double, 2>>& points)
{
	//Variablendeklaration
	int end = points.size();
	std::vector<std::array<double, 2>> hull; //Vektor der Eckpunkte
	//Sotieren nach y
	std::sort(points.begin(), points.end(), sort_by_y);
	std::array<double, 2> p0 = points[0];
	//p0 abziehen
	for ( int i = 0; i < end; ++i)
	{
		points[i][0] = points[i][0] - p0[0];
		points[i][1] = points[i][1] - p0[1];
	}
	//nach Winkeln sotieren
	std::sort(points.begin()+1, points.end(), sort_by_angle);
	//p0 addieren
	for ( int i = 0; i < end; ++i)
	{
		points[i][0] = points[i][0] + p0[0];
		points[i][1] = points[i][1] + p0[1];
	}
	//grahma scan ohne Stapel durchführen
	hull = graham_scan(points);
	//Schreibt output
	write_points_to_file("hull.txt", hull);
}


int main(int argc, char** argv)
{
	std::vector<std::array<double, 2>> points;
	points = read_points_from_file("convex-hull-points.txt");
	convex_hull(points);
	return 0;
}

