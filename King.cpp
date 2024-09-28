#include <iostream>
#include <string>
#include "King.h"
#include "Find_figure.h"
//Король
using namespace std;

King::King(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new King" << endl;
}

King::King()
{
	cout << "new King" << endl;
}



bool King::get_grid(vector <Figure*>& arr, int size, char board[8][8], string to_square)
{
	cout << find_figure(arr, size, this->get_y(), this->get_x() + 3)->get_letter();
	if (decode_x(to_square) == this->get_x() or decode_x(to_square) == this->get_x() - 1 or decode_x(to_square) == this->get_x() + 1) {
		if (decode_y(to_square) == this->get_y() or decode_y(to_square) == this->get_y() - 1 or decode_y(to_square) == this->get_y() + 1) {
			if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
				switch_was_moved();
				return true;
			}
			else {
				if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
					find_figure(arr, size, to_square)->die();
					switch_was_moved();
					return true;
				}
				return false;
			}
		}
	}
	
	if (get_was_moved() == false ) {
		if (decode_x(to_square) == this->get_x() + 2 and find_figure(arr, size, this->get_y(), this->get_x() + 3)->get_letter() == 'R' and board[this->get_y()][this->get_x() + 2] == 'O' and board[this->get_y()][this->get_x() + 1] == 'O') {
			switch_was_moved();
			find_figure(arr, size, this->get_y(), this->get_x() + 3)->set_x(find_figure(arr, size, this->get_y(), this->get_x() + 3)->get_x() - 2);
			find_figure(arr, size, this->get_y(), this->get_x() + 3)->switch_was_moved();
			return true;
		}
		if (decode_x(to_square) == this->get_x() - 2 and find_figure(arr, size, this->get_y(), this->get_x() - 4)->get_letter() == 'R' and board[this->get_y()][this->get_x() - 1] == 'O' and board[this->get_y()][this->get_x() - 2] == 'O' and board[this->get_y()][this->get_x() - 3] == 'O') {
			switch_was_moved();
			find_figure(arr, size, this->get_y(), this->get_x() - 4)->set_x(find_figure(arr, size, this->get_y(), this->get_x() - 4)->get_x() + 3);
			find_figure(arr, size, this->get_y(), this->get_x() + 3)->switch_was_moved();
			return true;
		}
	}
	return false;
}