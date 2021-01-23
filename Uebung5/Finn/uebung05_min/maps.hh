#ifndef MAPS_HH
#define MAPS_HH

#include <map>

//Einlesen von char-Werten und Übergabe an die map
std::map<char, int> get_frequencies();

//Ausgabe der map
void print_frequencies(const std::map<char, int>& frequencies);

#endif // MAPS HH
