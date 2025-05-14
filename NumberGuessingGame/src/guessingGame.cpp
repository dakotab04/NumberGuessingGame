#include <iostream>
#include "guessingGame.h"
#include <typeinfo>

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
		if (guess < 0 || guess > 100) // If number is not in range
		{
			std::cout << "Please guess an integer between 0-100." << '\n' << '\n';
			std::cin >> guess;
		}
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter an integer between 0-100." << '\n' << '\n';
			std::cin >> guess;
		}
	}
}
