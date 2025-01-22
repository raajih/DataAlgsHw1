#include "GameBag.h"

int GameBag::getCurrentSize() const
{
    return bag.size();
}

bool GameBag::isEmpty() const
{
    return (bag.size() == 0);
}
//TODO: implement
bool GameBag::add(const int& item)
{
    bag.push_back(item);
    return true;
}
//TODO: implement
bool GameBag::remove(const int& item)
{
    return false;
}

void GameBag::clear()
{
    bag.clear();
}
//TODO: implement
int GameBag::getFrequencyOf(const int& item) const
{
    return 0;
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

//TODO: implement
std::vector<int> GameBag::toVector() const
{
    return std::vector<int>();
}