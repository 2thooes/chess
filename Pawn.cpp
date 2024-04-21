#include <iostream>
#include <string>
#include "Pawn.h"

using namespace std;

Pawn::Pawn(int x, int y, string color) {
	set_x(x);
	set_y(y);
	set_color(color);
	cout << "new" << endl;
}