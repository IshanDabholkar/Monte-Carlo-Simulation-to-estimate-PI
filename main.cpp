#include<iostream>
#include"MonteCarlo.h"
int main()
{
	int n,mean = 0;
	
	std::cout << "Input number of Monte-Carlo samples" << std::endl;
	std::cin >> n;

	MonteCarlo m((double)n);
	m.beginSimulation();
}
