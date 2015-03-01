#ifndef __MONTE_CARLO__
#define  __MONTE_CARLO__

class MonteCarlo
{
public:
	MonteCarlo(int n) :samplesN(n), mean(0), sqMean(0)
	{}
	double functionX(double n);
	double meanValue();
	void beginSimulation();
private:
	int samplesN;
	double mean;
	double sqMean;
	
};
#endif
