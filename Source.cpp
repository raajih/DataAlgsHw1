//Raajih Roland
//CIS 2207 N02
//1/25/2025
//Design a guessing game where the user specifies the amount of numbers and the range the numbers can be in.
#include "GameBag.h"
#include <iostream>
using namespace std;

int main()
{
	GameBag gb;
	//TEST
	for (int i = 0; i < 11; i++)
		gb.add(i);
	
	gb.add(0);
	cout << gb.getFrequencyOf(0) << " " << gb.getFrequencyOf(1) << " " << gb.getFrequencyOf(20);

	


	//Just showing that THIS FILE SHOULD HAVE GAME
	//cout << "How many m?";
	//Game game(m, n)
	// if(game.winner(a, b, c, d)) cout<< "you win"!

	return 0;
}