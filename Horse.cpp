#include <iostream>
#include <string>
#include "Horse.h"

using namespace std;

Horse::Horse(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new Horse" << endl;
}