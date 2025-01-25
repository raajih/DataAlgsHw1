//Raajih Roland
//CIS 2207 N02
//1/25/2025
//Design a guessing game where the user specifies the amount of numbers and the range the numbers can be in.
#pragma once
#include <vector>
#include <random>
#include "GameBag.h"
class Game
{
private:
	int n; //(n) number of items
	int m; // range of values 1-m
	GameBag guesses;
	GameBag answers;

public:
	Game(int, int);

	int getN();
	int getM();
	void addRandomValues();
	int correctGuesses();
	bool winner();
	void setGuesses(std::vector<int>);
	
	
};