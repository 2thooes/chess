#include <iostream>
#include <string>
#include "King.h"
//Король
using namespace std;

King::King(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new King" << endl;
}