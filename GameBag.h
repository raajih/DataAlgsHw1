//Raajih Roland
//CIS 2207 N02
//1/25/2025
//Design a guessing game where the user specifies the amount of numbers and the range the numbers can be in.
#pragma once
#include<vector>
#include"BagInterface.h"


class GameBag : BagInterface<int> 
{
private:
	std::vector<int> bag;

public:
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const int& item); 
	bool remove(const int& item);
	void clear();
	int getFrequencyOf(const int& item) const;
	bool contains(const int& item) const;
	std::vector<int> toVector() const;
};