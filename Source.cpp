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


	return 0;
}