#include <iostream>
#include <string>
#include "Rook.h"
#include "Find_figure.h"
//я забыл как это называется
using namespace std;

Rook::Rook(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new Rook" << endl;
}

Rook::Rook()
{
	cout << "new Rook" << endl;
}

bool Rook::get_grid(vector <Figure*>& arr, int size, char board[8][8], string to_square)
{
	if (this->get_x()!=decode_x(to_square) and this->get_y() != decode_y(to_square) ) {
		return false;
	}
	if (find_figure(arr, size, to_square)->get_color() == this->get_color()) {
		return false;
	}
	if (decode_x(to_square) < this->get_x()) {
		//cout << "xx:" << decode_x(to_square) << "xxx:" << this->get_x();
		for (int i = decode_x(to_square)+1; i <= this->get_x()-1; i++) {
			if (board[this->get_y()][i] != 'O') {
				return false;
			}
		}
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			switch_was_moved();
			return true;
		}
		else {
			find_figure(arr, size, to_square)->die();
			switch_was_moved();
			return true;
		}
	}
	if (decode_y(to_square) < this->get_y()) {
		for (int i = decode_y(to_square) + 1; i <= this->get_y() - 1; i++) {
			if (board[i][this->get_x()] != 'O') {
				return false;
			}
		}
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			switch_was_moved();
			return true;
		}
		else {
			find_figure(arr, size, to_square)->die();
			switch_was_moved();
			return true;
		}
	}
	if (decode_x(to_square) > this->get_x()) {
		//cout << "xx:" << decode_x(to_square) << "xxx:" << this->get_x();
		for (int i = this->get_x() + 1; i <= decode_x(to_square) - 1; i++) {
			if (board[this->get_y()][i] != 'O') {
				return false;
			}
		}
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			switch_was_moved();
			return true;
		}
		else {
			find_figure(arr, size, to_square)->die();
			switch_was_moved();
			return true;
		}
	}
	if (decode_y(to_square) > this->get_y()) {
		for (int i = this->get_y() + 1; i <= decode_y(to_square) - 1; i++) {
			if (board[i][this->get_x()] != 'O') {
				return false;
			}
		}
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			switch_was_moved();
			return true;
		}
		else {
			find_figure(arr, size, to_square)->die();
			switch_was_moved();
			return true;
		}
	}
	return false;
}