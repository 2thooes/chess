#include <iostream>
#include <string>
#include "Queen.h"
//Королева
using namespace std;

Queen::Queen(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new Queen" << endl;
}