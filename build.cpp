#include <iostream>
#include "build.h"

using namespace std;

string find_type(string str) { return str.substr(0, str.find(";")); }

int find_x(string str) { return stoi(str.substr(str.find(";") + 1, str.find(";") + 2)); }

int find_y(string str) { return stoi(str.substr(str.find(";") + 3, str.find(";") + 4)); }

string find_color(string str) { return str.substr(str.rfind(";") + 1, str.size()); }


void build(string str, Figure* arr,int index)
{
	if (find_type(str) == "Pawn") {//coded by hardcode apostol
		arr[index] = Pawn(find_x(str), find_y(str), find_color(str));
	}
	if (find_type(str) == "Rook") {
		arr[index] = Rook(find_x(str), find_y(str), find_color(str));
	}
	if (find_type(str) == "Horse") {
		arr[index] = Horse(find_x(str), find_y(str), find_color(str));
	}
	if (find_type(str) == "Bishop") {
		arr[index] = Bishop(find_x(str), find_y(str), find_color(str));
	}
	if (find_type(str) == "Queen") {
		arr[index] = Queen(find_x(str), find_y(str), find_color(str));
	}
	if (find_type(str) == "King") {
		arr[index] = King(find_x(str), find_y(str), find_color(str));
	}
}
