//Raajih Roland
//CIS 2207 N02
//1/25/2025
//Design a guessing game where the user specifies the amount of numbers and the range the numbers can be in.
#include <random>
#include <iostream>
#include "Game.h"

//M is range of values, n is number of integers.
Game::Game(int inM, int inN)
{
	m = inM;
	n = inN;
    addRandomValues();
}

int Game::getN()
{
    return n;
}

int Game::getM()
{
    return m;
}

//Where i went to find information on random number generator in c++:
//https://www.reddit.com/r/learnprogramming/comments/5uu9eu/generating_random_number_in_c/?rdt=62218
void Game::addRandomValues()
{
    std::random_device rd;                 
    std::mt19937 gen(rd());               
    std::uniform_int_distribution<int> dist(1, m);

    //Add random values to bag
    for (int i = 0; i < n; i++) 
    {
        int randomValue = dist(gen);       
        answers.add(randomValue);     
    }

  
}

int Game::correctGuesses()
{
    int correctCount = 0;
    GameBag tempAnswerBag = answers;
    std::vector<int> tempGuesses = guesses.toVector();
    for (int i = 0; i < n; i++)
    {
        if (tempAnswerBag.contains(tempGuesses[i]))
        {
            correctCount++;
            tempAnswerBag.remove(tempGuesses[i]); //This returns true so I thought about using this as the if statement, but I think it would make the code more confusing.
        }
    }

     return correctCount;
}

bool Game::winner()
{
    if (this->correctGuesses() == n)
        return true;
    else
        return false;
}

void Game::setGuesses(std::vector<int> newGuesses)
{
    guesses.clear();
    for (int i = 0; i < newGuesses.size(); i++)
    {
        guesses.add(newGuesses[i]);
    }
}
