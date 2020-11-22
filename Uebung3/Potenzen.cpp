#include <iostream>
#include <sstream>
#include <string>
#include <cmath>


// Frage nach Input 
int ask(std::string text)
{
	// Variablendeklaration 
	int input;
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




namespace power {

	//Beschleunigte Variante die nur n/2 + 1 Multiplikation benötigt 
	int iterative(int q, int n)
	{
		int qn=1;
		int modulo;
		modulo = n % 2;
		for (int i=1; i<=(n/2); i++)
		{
			qn=qn*q;
		}
		if (modulo == 0)
		{
			return qn*qn;
		}
		return qn*qn*q;
	}

	int recursive(int q, int n)
	{
		if (1 < n)
		{
			return recursive(q, n-1) * q;
		}
		return q;
	}

}


int main(int argc, char** argv) 
{
	// Variablendeklaration 
	int q;
	int n;
	int ite;
	int rec;
	// Vorstellung des Programmes
	std::cout << "Dieses Programm berechnet q^n" << std::endl;
	// Fragt Input vom Benutzer ab
	q = ask("q");
	n = ask("n");
	// Prüft auf Speziafälle
	if(n<0)
	{
		std::cerr << "n muss positiv sein" << std::endl;
		return 0;
	}
	if(n == 0 and q!=0)
	{
		std::cout << q << " hoch null ist null" << std::endl;
		return 0;
	}
	if(n == 0 and q ==0)
	{
		std::cout << "Ich bin kein Philosophieprogramm!" << std::endl;
		return 0;
	}
	// Loese die Gleichung
	ite=power::iterative(q, n);
	rec=power::recursive(q, n);
	// Ausgeben auf stdout 
	std::cout << "iterativ berechnet = " << ite << std::endl;
	std::cout << "recursive berechnet = " << rec << std::endl;
	return 0;
}

