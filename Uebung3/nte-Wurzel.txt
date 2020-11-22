#include <iostream>
#include <sstream>
#include <string>
#include <cmath>


// Frage nach Input 
double ask(std::string text)
{
	// Variablendeklaration 
	double input;
	bool valid = false;
	// Frage nach Input bis korrekt eingegeben
	while (!valid)
	{
		valid = true; 

		std::cout << text << " = " << std::flush;
		std::cin >> input;

		if(std::cin.fail()) //cin.fail() prüft ob Eingabe den korrekten Typ hatte, falls nicht gibt es true zurück 
		{
			//Bereitet erneute Eingabe vor
			std::cin.clear(); 
			std::cin.ignore(); 
			std::cout << "Kein valider Input" << std::endl;
			valid = false; //The cin was not an integer so try again.
		}

	}
	return input;
}

namespace root {

	double root_iterative(double q, int n, int steps)
	{
		double a=1.0;
		double b;
		for (int i=1; i <= steps; i++)
		{
			b= std::pow(a, n-1);
			a = a + (1/n) * ( ( q/b  ) -a );
		}
		return a;
	}

//	void root_test(double q, int n, int steps)
//	{
//		int i=1;
//		double a=1;
//		double test;
//		double differenz;
//		double b
//		for (int i=1; i <= steps; i++)
//		while (i <= steps)
//		{
//			b= std:pow(a, n-1)
//			a = a + (1/n) * ( ( q/b  ) -a );
//			i=i+1;
//		}
//		test=power::power_iterative( a, n);
//		differenz=q-test;
//		std::cout << n << "-te Wurzel = " << a << "\n" << n << "-te Wurzel hoch " << n << " = " << test << "\nDifferenz = " << differenz << std::endl;
//	}

}


int main(int argc, char** argv) 
{
	// Variablendeklaration 
	double q;
	int n;
	int steps = 100;
	double ite;
	// Vorstellung des Programmes
	std::cout << "Dieses Programm berechnet die n-te Wurzel aus q" << std::endl;
	// Fragt Input vom Benutzer ab
	q = ask("q");
	n = ask("n");
	// Prüft auf Speziafälle
	if(n<1)
	{
		std::cerr << "n muss positiv sein" << std::endl;
		return 0;
	}
	// Loese die Gleichung
	ite = root::root_iterative(q, n, steps);
	// Ausgeben auf stdout 
	std::cout << "iterativ berechnete Wurzel = " << ite << std::endl;
//	root::root_test(q, n, steps);
	return 0;
}

