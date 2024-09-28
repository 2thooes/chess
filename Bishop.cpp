#include <iostream>
#include <string>
#include <math.h>
#include "Bishop.h"
#include "Find_figure.h"
//Офицер
using namespace std;

Bishop::Bishop(int x, int y, string color, char letter) :Figure(x, y, color,letter) {
	cout << "new Bishop" << endl;
}

bool Bishop::get_grid(vector <Figure*>& arr,int size, char board[8][8], string to_square)
{	
	int ii = 1;
	if (abs(this->get_x() - decode_x(to_square)) != abs(this->get_y() - decode_y(to_square))) {//исключение для того чтобы слон ходил лишь по диагонали
		return false;
	}
	//↖️готово
	if (decode_x(to_square) < this->get_x()and decode_y(to_square) < this->get_y()) {
		for (int i = decode_x(to_square) + 1; i < this->get_x() ; i++) {
			cout <<"x" << i<<"y"<<i+this->get_y()-this->get_x();
			if (board[i+this->get_y()-this->get_x()][i] != 'O') {
				return false;
			}
		}
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			return true;
		}
		else {
			if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
				find_figure(arr, size, to_square)->die();
				return true;
			}
			return false;
		}
	}
	//↙️готово
	if (decode_x(to_square) < this->get_x() and decode_y(to_square) > this->get_y()) {
		cout << "d";
		for (int i = decode_x(to_square) + 1; i < this->get_x(); i++) {
			if (board[decode_y(to_square) - ii][i] != 'O') {
				return false;
			}
			ii += 1;
		}
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			return true;
		}
		else {
			if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
				find_figure(arr, size, to_square)->die();
				return true;
			}
			return false;
		}
	}
	//↗️
	if (decode_x(to_square) > this->get_x() and decode_y(to_square) < this->get_y()) {
		cout << "3";
		for (int i = decode_y(to_square) + 1; i < this->get_y(); i++) {
			if (board[i][decode_x(to_square) - ii] != 'O') {
				return false;
			}
			ii += 1;
		}
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			return true;
		}
		else {
			if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
				find_figure(arr, size, to_square)->die();
				return true;
			}
			return false;
		}
	}
	//↘️готово
	if (decode_x(to_square) > this->get_x() and decode_y(to_square) > this->get_y()) {
		for (int i = this->get_x() + 1; i < decode_x(to_square); i++) {
			cout << "x" << i << "y" << i + this->get_y() - this->get_x();
			if (board[i + this->get_y() - this->get_x()][i] != 'O') {
				return false;
			}
		}
		if (board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			return true;
		}
		else {
			if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
				find_figure(arr, size, to_square)->die();
				return true;
			}
			return false;
		}
	}
	return false;

}