#include<iostream>
#include<cmath>

//Siehe Aufgabenstellung
void collatz(int number)
{
	//Gibt die eingegebene Zahl aus
	std::cout << number << std::endl;
	//
	while (number != 1 and number != 0 and number != -1 and number != -5 and number != -17)
	{
		//Prueft ob Zahl durch 2 teilbar ist und teilt durch 2
		if ((number%2) == 0)
		{
			number = number/2;
		}
		//Wenn dem nicht so ist multipliziert mit 3 und addiert 1 
		else 
		{
			number = number*3+1;
		}
	}
	std::cout << "Das Ergebnis ist : " << number << std::endl;
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
	int startwert;
	while(true)
	{
		//Fragt nach Input
		startwert = ask("Geben Sie einen Startwert für die Collatz-Folge ein");
		//Ruft collatz auf 
		collatz(startwert);
	}
	//Wird nie ausgeführt
	return 0;
}

