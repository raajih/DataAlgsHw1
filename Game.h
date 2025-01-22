#pragma once
#include <vector>
class Game
{
private:
	int n; //(n) number of items
	int m; // range of values 1-m
	void addRandomValues();

public:
	Game(int, int);

	bool winner(std::vector<int>);
	int correctGuesses(std::vector<int>);
	//TODO: figure out what else I might need here...
};