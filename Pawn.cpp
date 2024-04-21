#include <iostream>
#include <string>
#include "Pawn.h"

using namespace std;

Pawn::Pawn(int x, int y, string color):Figure(x, y, color) {
	cout << "new" << endl;
}