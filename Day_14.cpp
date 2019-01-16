#include <iostream>
#include <cstdlib>
using namespace std;
/*
*Set lower and upper boundaries for random numbers
*Generate random number in the boundary
*Store generated number in a variable
*Ask user to make a guess
*Store user input and check if input is correct
*Increment trial counter
*if user input is correct or equal to random number: Print “Good job! You’re psychic!”.
*if user input is higher than random number: Print “Getting close! Guess lower”
*if user input is lower than random number: Print “Getting close! Guess higher”
*Repeat step 4
*If user is out of tries: Print "Wonk wonk! You're out of tries." and print correct value 
*/

int main() {

	int randomNumber, userGuess;
	int numberOfTries = 0;
	srand(time(NULL));  // unique seed
/* generate secret number between 1 and 10: */
	randomNumber = rand() % 10 + 1;

	while (true) {

		cout << "Enter a number to make your guess: ";
		cin >> userGuess;
		numberOfTries++;

		if (userGuess == randomNumber) {
			cout << "Good job! You’re psychic!\n";
			break;
		}
		else if (numberOfTries >= 3) {
			cout << "Wonk wonk! You're out of tries. The correct number is: " << randomNumber << endl;
			break;
		}
		else if (userGuess > randomNumber) {
			cout << "Getting close! Guess lower\n";
		}
		else if (userGuess < randomNumber) {
			cout << "Getting close! Guess higher\n";
		}


	}
	return 0;
}
