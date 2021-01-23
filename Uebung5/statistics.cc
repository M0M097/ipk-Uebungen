#include <vector>
#include <cmath>
#include <bits/stdc++.h> 
#include "statistics.hh"

// Mittelwert aller Einträge eines Vektors
double mean(const std::vector<double>& v)
{
	double Summe;
	for(int i = 0; i < (int)v.size(); ++i)
	{
		Summe = Summe + v[i];
	}
	return(Summe/v.size());
}	

// Median aller Einträge eines Vektors
double median(const std::vector<double>& v)
{
	std::vector<double> vtilde = v;
	std::sort(vtilde.begin(), vtilde.end());
	if(v.size() % 2 == 0)
	{
		return(0.5*(vtilde[(v.size()-1)/2] + vtilde[(v.size()-1)/2 +1]));
	}
	return(vtilde[v.size()/2]);
}

// k-te statistische Moment
double moment(const std::vector<double>& v, int k)
{
	double Summe;
	for(int i = 0; i < (int)v.size(); ++i)
	{
		Summe = std::pow(Summe + v[i], k);
	}
	return(Summe/v.size());
}	
// Standardabweichung eines Vektors 
double standard_deviation(const std::vector<double>& v)
{
	std::vector<double> vtilde = v;
	for (int i = 0; i < (int)v.size(); ++i)
	{
		vtilde[i] = std::pow((v[i] - mean(v)), 2);
	}
		
	return (std::pow(mean(vtilde),0.5));
}
