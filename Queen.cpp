#include <iostream>
#include <string>
#include "Queen.h"

using namespace std;

Queen::Queen(int x, int y, string color) :Figure(x, y, color) {
	cout << "new Queen" << endl;
}