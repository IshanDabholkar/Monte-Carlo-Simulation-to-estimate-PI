#include"MonteCarlo.h"
#include<iostream>
#include<cmath>
#include<random>
#include<time.h>

double MonteCarlo::functionX(double n)
{
	return (4 / (1 + n*n));
}
double MonteCarlo::meanValue()
{
	double x=mean / samplesN;
	std::cout << "PI: " << x << std::endl;
	return x;
}


void MonteCarlo :: beginSimulation()
{
	
	std::srand((unsigned)time(NULL));
	for (int i = 0; i < samplesN; ++i)
	{
		double x = ((double)rand() / (RAND_MAX + 1));
		x = functionX(x);
		mean += x;
		sqMean +=  x*x;
	}
	meanValue();
}
