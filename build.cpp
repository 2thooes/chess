#include <iostream>
#include "build.h"

using namespace std;
//ƒостает из заданной строки тип будующей фигуры
string find_type(string str) { return str.substr(0, str.find(";")); }

//ƒостает из заданной строки х координату будующей фигуры
int find_x(string str) { return stoi(str.substr(str.find(";") + 1, str.find(";") + 2)); }

//ƒостает из заданной строки у координату будующей фигуры
int find_y(string str) { return stoi(str.substr(str.find(";") + 3, str.find(";") + 4)); }

//ƒостает из заданной строки цвет будующей фигуры
string find_color(string str) { return str.substr(str.rfind(";") + 1, str.size()); }

// —обственно задача тут из строки достать конкретную информацию и на ее основе создать обьект
void build(string str, vector <Figure*>& arr,int index)
{
	if (find_type(str) == "Pawn") {//Ќахардкодил
		arr.push_back(new Pawn(find_x(str), find_y(str), find_color(str),str[0]));
	}
	if (find_type(str) == "Rook") {
		arr.push_back(new Rook(find_x(str), find_y(str), find_color(str), str[0]));
	}
	if (find_type(str) == "Horse") {
		arr.push_back(new Horse(find_x(str), find_y(str), find_color(str), str[0]));
	}
	if (find_type(str) == "Bishop") {
		arr.push_back(new Bishop(find_x(str), find_y(str), find_color(str), str[0]));
	}
	if (find_type(str) == "Queen") {
		arr.push_back(new Queen(find_x(str), find_y(str), find_color(str), str[0]));
	}
	if (find_type(str) == "King") {
		arr.push_back(new King(find_x(str), find_y(str), find_color(str), str[0]));
	}
}
