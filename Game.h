//Raajih Roland
//CIS 2207 N02
//1/25/2025
//Design a guessing game where the user specifies the amount of numbers and the range the numbers can be in.
#pragma once
#include <vector>
#include "GameBag.h"
class Game
{
private:
	int n; //(n) number of items
	int m; // range of values 1-m
	void addRandomValues();
	GameBag guesses;

public:
	Game(int, int);

	bool winner(std::vector<int>);
	int correctGuesses(std::vector<int>);
	//TODO: figure out what else I might need here...
};