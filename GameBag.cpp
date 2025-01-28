//Raajih Roland
//CIS 2207 N02
//1/25/2025
//Design a guessing game where the user specifies the amount of numbers and the range the numbers can be in.
#include "GameBag.h"


int GameBag::getCurrentSize() const
{
    return bag.size();
}

bool GameBag::isEmpty() const
{
    return (bag.size() == 0);
}

bool GameBag::add(const int& item)
{
    bag.push_back(item);
    return true;
}
//Removes item from bag. Returns true if bag contains item, false if not.
bool GameBag::remove(const int& item)
{
    if (this->contains(item)) //If bag contains item, remove it and return true.
    {
        for (int i = 0; i < bag.size(); i++)
        {
            if (bag[i] == item)
            {
                bag.erase(bag.begin() + i);
                return true;
            }
        }
        
    }
    return false;
}

void GameBag::clear()
{
    bag.clear();
}

int GameBag::getFrequencyOf(const int& item) const
{
    int counter = 0;
    for (int i = 0; i < bag.size(); i++)
    {
        if (bag[i] == item)
        {
            counter++;
        }
    }
    
    return counter;
}

bool GameBag::contains(const int& item) const
{
    for (int bagItem : bag)
    {
        if (bagItem == item)
            return true;
    }
    return false;
}

std::vector<int> GameBag::toVector() const
{
    std::vector<int> newBag = bag;
    return newBag;
}