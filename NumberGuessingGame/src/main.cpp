#include "guessingGame.h"
#include "randomNumberGenerator.h"

int main()
{
	int randomNum {randomNumberGenerator()}; // Picks random Number between 0-100.
	guessingGame(randomNum);

	return 0;
}