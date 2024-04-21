#include <iostream>
#include <string>
#include "Bishop.h"

using namespace std;

Bishop::Bishop(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new Bishop" << endl;
}