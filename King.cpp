#include <iostream>
#include <string>
#include "King.h"

using namespace std;

King::King(int x, int y, string color) :Figure(x, y, color) {
	cout << "new King" << endl;
}