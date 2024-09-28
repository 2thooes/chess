#include <iostream>
#include <string>
#include "Figure.h"

using namespace std;
//Базовый клас, от которого все наследуется
Figure::Figure(int x, int y, string color, char letter) {
	this->x = x;
	this->y = y;
	this->color = color;
	this->letter = letter;
}

Figure::Figure() {
	this->x = -1;
	this->y = -1;
	this->color = "null";
}

void Figure::switch_was_moved()
{
	this->was_moved = true;
}

bool Figure::get_was_moved()
{
	return was_moved;
}

int Figure::get_x() { return x; }

int Figure::get_y() { return y; }

string Figure::get_color() { return color; }

char Figure::get_letter() { return letter; }


void Figure::set_x(int new_x) { this->x = new_x; }

void Figure::set_y(int new_y) { this->y = new_y; }

void Figure::set_color(string new_color) { this->color = new_color; }

bool Figure::get_grid(vector <Figure*>& arr,int size, char board[8][8], string to_square) { return false; }

void Figure::go(string square)
{
	set_x(decode_x(square));
	set_y(decode_y(square));
}

void Figure::die() { this->x = -1; this->y = -1; this->color = "null"; }
