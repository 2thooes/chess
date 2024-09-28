#include <iostream>
#include <string>
#include "Horse.h"
#include "Find_figure.h"
//Фигура коня
using namespace std;

Horse::Horse(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new Horse" << endl;
}

bool Horse::get_grid(vector <Figure*>& arr, int size, char board[8][8], string to_square)
{
	if ((decode_x(to_square) + 1 == this->get_x() or decode_x(to_square) - 1 == this->get_x()) and (decode_y(to_square) + 2 == this->get_y() or decode_y(to_square) - 2 == this->get_y())) {
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			return true;
		}
		else {
			if (find_figure(arr, size, to_square)->get_color() == this->get_color()) {
				cout << "Нельзя бить свою фигуру" << endl;
				return false;
			}
			find_figure(arr, size, to_square)->die();
			return true;
		}
	}
	if ((decode_x(to_square) + 2 == this->get_x() or decode_x(to_square) - 2 == this->get_x()) and (decode_y(to_square) + 1 == this->get_y() or decode_y(to_square) - 1 == this->get_y())) {
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			return true;
		}
		else {
			if (find_figure(arr, size, to_square)->get_color() == this->get_color()) {
				cout << "Нельзя бить свою фигуру" << endl;
				return false;
			}
			find_figure(arr, size, to_square)->die();
			return true;
		}
	}
	return false;
}