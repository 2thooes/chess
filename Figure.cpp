#include <iostream>
#include <string>
#include "Figure.h"

using namespace std;

Figure::Figure(int x, int y, string color) {
	this->x = x;
	this->y = y;
	this->color = color;
}

Figure::Figure() {
	this->x = 0;
	this->y = 0;
	this->color = "";
}


