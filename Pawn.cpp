#include <iostream>
#include <string>
#include "Pawn.h"

using namespace std;

Pawn::Pawn(int x, int y, string color, char letter):Figure(x, y, color,letter) {
	cout << "new Pawn" << endl;
}