#include<iostream>
#include<cmath>

// Frage nach Input 
double ask(std::string text)
{
	// Variablendeklaration 
	double input;
	// Frage nach Input 
	std::cout << text << " = " << std::flush;
	std::cin >> input;
	return input;
}


// Testet Input und gibt Wurzelterm der Mitternachtsformel zurück  
double solv(double a, double b, double c)
{
	// Variablendeklaration 
	double radikand;
	double wurzel;
	// Prüfen ob eindeutige Lösung existiert
	if (a == 0 and b ==0)
	{
		throw "Fuer a = b = 0  existiert keine eindeutige Loesung";
	}
	//Berechnet Radikand
	radikand = (b*b-4*a*c);
	// Prüfe auf complexe Loesungen
	if (radikand < 0)
	{
		throw "Keine reele Loesung";
	}
	// Gibt Wurzel aus Radikand zurueck 
	wurzel = std::sqrt(radikand);
	return wurzel;
}



int main(int argc, char** argv) 
{
	// Variablendeklaration 
	double a;
	double b;
	double c;
	double Wurzel;
	double x1;
	double x2;
	// Vorstellung des Programmes
	std::cout << "Dieses Programm loest die Mitternachtsformel ax^2 + bx +c = 0" << std::endl;
	// Fragt Input vom Benutzer ab
	a = ask("a");
	b = ask("b");
	c = ask("c");
	// Loese die Gleichung
	try
	{
		Wurzel = solv(a, b, c);
		x1 = (-b + Wurzel)/(2*a);
		x2 = (-b - Wurzel)/(2*a);
		// Ausgeben auf stdout 
		std::cout << "Erste Nullstelle = " << x1 << std::endl;
		std::cout << "Zweite Nullstelle = " << x2 << std::endl;
	}
	//Gebe Fehler zu stderr aus
	catch (const char* msg) 
	{
		std::cerr << msg << std::endl;
   	}
	return 0;
}

