#include "randomNumberGenerator.h"
#include <random>
using namespace std;

int randomNumberGenerator()
{
	int min{ 0 };
	int max{ 100 };

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(min, max);

	int randomValue = distrib(gen);

	return randomValue;
}
