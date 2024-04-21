#include <iostream>
#include <string>
#include "Bishop.h"

using namespace std;

Bishop::Bishop(int x, int y, string color) :Figure(x, y, color) {
	cout << "new Bishop" << endl;
}