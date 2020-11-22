#include<iostream>
#include<cmath>

//Siehe Aufgabenstellung
unsigned long fibonacci(int n)
{
	unsigned long fn;
	unsigned long erste = 0;
	unsigned long zweite = 1;
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	for (int i = 3; i <= n; i++)
	{
		fn = erste + zweite;
		erste = zweite;
		zweite = fn;
	}
	return fn;
}



// Frage nach Input 
int ask(std::string text)
{
	// Variablendeklaration 
	int input;
	// Frage nach Input 
	std::cout << text << " = " << std::flush;
	std::cin >> input;
	return input;
}

int main(int argc, char ** argv)
{
	//Variablendeklaration
	int endwert;
	unsigned long ergebnis;
	endwert = ask("Wievieltes Glied der Fibonacci-Folge soll berechnet werden");
	for (int i = 1; i <= endwert; i++) 
	{
		//Fragt nach Input
		//Ruft fibonacci auf 
		ergebnis = fibonacci(i);
		std::cout << ergebnis << std::endl;
	}
	return 0;
}

