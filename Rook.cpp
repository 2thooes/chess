#include <iostream>
#include <string>
#include "Rook.h"
//я забыл как это называется
using namespace std;

Rook::Rook(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new Rook" << endl;
}