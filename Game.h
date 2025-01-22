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