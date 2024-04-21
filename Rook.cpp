#include <iostream>
#include <string>
#include "Rook.h"

using namespace std;

Rook::Rook(int x, int y, string color) :Figure(x, y, color) {
	cout << "new Rook" << endl;
}