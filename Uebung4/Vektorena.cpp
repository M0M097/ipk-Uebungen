#include <iostream>
#include <vector>

void vektorinhalt(std::vector<double> v)
{
	for (int i = 0 ; i < v.size() ; ++i)
		std::cout << v[i] << std::endl;
}

int main(int argc, char** argv) 
{
	std::pair<double,double> kg;
	// Ein leerer vector für ganze Zahlen
	std::vector<double> v1;
	std::cout << "Erster Vektor" << std::endl;
	//vektorinhalt(v1);
      	// Ein vector für ganze Zahlen mit 10 Edoublerägen
	std::vector<double> v2(10);
	std::cout << "Zweiter Vektor" << std::endl;
	vektorinhalt(v2);
	// Ein vector mit den Edoublerägen 3,8,7,5,9,2
	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
	std::cout << "Dritter Vektor" << std::endl;
	vektorinhalt(v3);
	return 0;
}

