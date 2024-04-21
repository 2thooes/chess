#include <iostream>
#include <string>
#include "Horse.h"

using namespace std;

Horse::Horse(int x, int y, string color) :Figure(x, y, color) {
	cout << "new Horse" << endl;
}