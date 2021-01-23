#include "statistics.hh"

#include <iostream>
#include <vector>
#include <algorithm> //for std::sort
#include <cmath> // for std::pow


//function mean, kalkuliert den Mittelwert 
double mean(const std::vector<double>& v)
{
	double sum;
	double size = v.size();
	
	if (v.size() == 0)
	{
		return 0;
	}
	
	else
	{
		for (auto entry : v)
		{
			sum += entry;
		}
	
		return sum/size;
	}
}


//function median, kalkuliert den Median
double median(const std::vector<double>& v)
{
	std::vector<double> vcopy = v;
	std::sort(vcopy.begin(), vcopy.end());
		
	if (v.size() == 0)
	{
		return 0;
	}
	
	if (v.size() % 2 == 1)
	{
		return vcopy[v.size()/2];
	}
	
	else 
	{
		return 0.5*(vcopy[(v.size()-1)/2]+vcopy[(v.size()-1)/2+1]);
	}
	
}

//function moment, kalkuliert das k-te statistische Momentn m_k
double moment(const std::vector<double>& v, int k)
{
	
	double mk;
	
	if (v.size() == 0)
	{
		return 0;
	}
	
	else
	{
		
		for (auto entry : v)
		{
			mk += std::pow(entry, k);
		}
	
		return mk/v.size();
	}
}

//function standard_deviation, kalkuliert die Standardabweichung 
double standard_deviation(const std::vector<double>& v)
{
	std::vector<double> sdvector(v.size());
	double std_dev;
	
	if (v.size() == 0)
	{
		return 0;
	}
	
	else 
	{
		for (unsigned int i = 0; i < v.size(); ++i)
		{
			sdvector[i]=std::pow((v[i]-mean(v)),2);
		}
			
		std_dev = std::pow(mean(sdvector),0.5);
	
		return std_dev;
	}
	
}

