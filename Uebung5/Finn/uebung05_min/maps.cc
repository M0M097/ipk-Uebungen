#include "maps.hh"

#include <map>
#include <iostream>
#include <cctype> //for std::isalpha

std::map<char, int> get_frequencies()
{
	std::map<char, int> mymap;
	
	while(true)
	{
		unsigned char c;
		//read in character
		std::cin >> c; 
		c = std::toupper(c);
		
		//abort if input closed
		if (not std::cin)
		{
			break;
		}
		
		if (std::isalpha(c))
		{
			mymap[c]=mymap[c]+1;
		}
		
	}
	
	return mymap;
}

void print_frequencies(const std::map<char, int>& frequencies)
{
	
	int count = 0;
	
	for (auto& entry : frequencies)
	{
		//std::cout << entry.first << " " << entry.second << std::endl;
		count += entry.second;
	}
	
	std::cout << "Gesamtbuchstabenzahl = " << count << std::endl;
	
	for (auto& entry : frequencies)
	{
		double entrydouble;
		entrydouble = static_cast<double>(entry.second);
		std::cout << "Relative Häufigkeit von " << entry.first << ": " << entrydouble/count << std::endl;
	}
		
}
