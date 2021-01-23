#ifndef POINT_HH
#define POINT_HH

#include <array>
#include <cmath>
#include <iostream>


template<typename Coord, int dim>
class Point 
{
	using Coordinate = Coord; //Steht in der Aufgabe, macht sonst keinen Sinn
	std::array<Coord, dim> _coordinates;
public:

	// Default Konstruktor
	Point() {
		_coordinates.fill(0);
	};

	// Konstruktor
	Point(std::array<Coord, dim> coordinates) : _coordinates(coordinates){};

	// Accessoren
	//
	Coord coordinates()
	{
		return _coordinates;
	};



	//Methoden
	
	// Dimension exportieren
	static const int dimension = dim;

	// i-ten Punkt ausgeben
	Coord& x(int i)
	{
		return _coordinates[i];
	}

	// Norm berechnen
	double norm() const
	{
		double prenorm = 0;
		for (int i = 0; i < dim; i++){
			prenorm += (_coordinates[i] * _coordinates[i]);
		}
		return(std::sqrt(prenorm));
	}

	// Variablenzugriff mit []
	Coord& operator[](int i){
		return _coordinates[i];
	}

	const Coord& operator[](int i) const{
		return _coordinates[i];
	}
		
};

#endif //POINT_HH
