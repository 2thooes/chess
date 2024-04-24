#include <iostream>
#include <string>
#include "Bishop.h"
//ќфицер
using namespace std;

Bishop::Bishop(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new Bishop" << endl;
}