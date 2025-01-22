#pragma once
#include<vector>
#include"BagInterface.h"

//Interface means you have to implement all of those functions.
class GameBag : BagInterface<int> //Inherits BagInterface
{
private:
	std::vector<int> bag;

public:
	int getCurrentSize() const; //Have const because we don't want to change anything.
	bool isEmpty() const;
	bool add(const int& item); /*Const before T& because we don't want to change the thing going into the bag. Have it pass by
	reference, so that it doesn't make a copy of the variable which makes the code more efficient / faster.*/
	bool remove(const int& item);
	void clear();
	int getFrequencyOf(const int& item) const;
	bool contains(const int& item) const;
	std::vector<int> toVector() const;
};