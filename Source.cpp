#include "GameBag.h"
#include <iostream>
using namespace std;

int main()
{
	GameBag gb;
	cout << gb.getCurrentSize() << endl;
	cout << gb.isEmpty() << endl;
	cout << gb.contains(5) << endl;

	gb.add(6);
	
	cout << gb.getCurrentSize() << endl;
	cout << gb.isEmpty() << endl;
	cout << gb.contains(5) << endl;

	gb.add(5);

	cout << gb.getCurrentSize() << endl;
	cout << gb.isEmpty() << endl;
	cout << gb.contains(5) << endl;

	//Just showing that THIS FILE SHOULD HAVE GAME
	//cout << "How many m?";
	//Game game(m, n)
	// if(game.winner(a, b, c, d)) cout<< "you win"!

	return 0;
}