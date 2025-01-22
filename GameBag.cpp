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

}
//Not done!!
bool GameBag::remove(const int& item)
{
    
}

void GameBag::clear()
{
    bag.clear();
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

//Not finished!!
std::vector<int> GameBag::toVector() const
{
    return std::vector<int>();
}