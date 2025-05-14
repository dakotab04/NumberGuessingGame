#include <iostream>
#include "guessingGame.h"

void guessingGame(int randomNum)
{
	std::cout << "Guess an integer 1-100." << '\n' << '\n';

	int guess{};
	std::cin >> guess;

	while (guess != randomNum)
	{
		if (guess < randomNum) // If guess is less than number
		{
			std::cout << "Too low. Guess again." << '\n' << '\n';
			std::cin >> guess;
		}
		if (guess > randomNum) // If guess is greater than number
		{
			std::cout << "Too high. Guess again." << '\n' << '\n';
			std::cin >> guess;
		}
		if (guess == randomNum) // If user guesses correctly.
		{
			std::cout << "Congratulations, you guessed it!" << '\n' << '\n';
			return;
		}
	}
}
