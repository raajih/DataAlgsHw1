//Raajih Roland
//CIS 2207 N02
//1/25/2025
//Design a guessing game where the user specifies the amount of numbers and the range the numbers can be in.
#include "GameBag.h"
#include "Game.h"
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;


int main()
{
	string repeat;
	do {
		//Get m and n from user.
		int numIntegers, range;
		cout << "Enter the number of integers: ";
		cin >> numIntegers;
		cout << "\nEnter the range of integers, from 1 to __: ";
		cin >> range;
		cout << endl;

		//Get guesses from user and input guesses into Game object.
		Game newGame(range, numIntegers);
		vector<int> newGuesses(numIntegers);
	
	


		//Continually ask for guesses until user guesses all correctly.
		do {
			for (int i = 0; i < newGame.getN(); i++)
			{
				cout << "Enter number " << i + 1 << ": ";
				cin >> newGuesses[i];
			}
			newGame.setGuesses(newGuesses);

			cout << newGame.correctGuesses() << " of your guesses are correct.\n";
		} while (!newGame.winner());

		cout << "WINNER! Play again? (Y) or (N): ";
		cin >> repeat;


	} while (repeat == "Y" || repeat == "y");

	cout << endl << "Goodbye!";
	


	

	return 0;
}


