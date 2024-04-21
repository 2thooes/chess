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

int Figure::get_x() { return x; }

int Figure::get_y() { return y; }

string Figure::get_color() { return color; }

void Figure::set_x(int new_x) { this->x = new_x; }

void Figure::set_y(int new_y) { this->y = new_y; }

void Figure::set_color(string new_color) { this->color = new_color; }