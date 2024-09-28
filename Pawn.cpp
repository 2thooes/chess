#include <iostream>
#include <string>
#include "Pawn.h"
#include "decode_x.h"
#include "decode_y.h"
#include "Find_figure.h"
//Пешка
using namespace std;

Pawn::Pawn(int x, int y, string color, char letter):Figure(x, y, color,letter) 
{
	cout << "new Pawn" << endl;
}

Pawn::Pawn()
{
	cout << "new Pawn" << endl;
}



bool Pawn::get_grid(vector <Figure*>& arr,int size, char board[8][8], string to_square)
{
	 
	if (get_color() == "black") {
		if (this->get_x() == decode_x(to_square) and this->get_y() == decode_y(to_square) - 1 and board[decode_x(to_square)][decode_y(to_square)] == 'O') {
			switch_was_moved();
			return true;
		}
		if (this->get_x() == decode_x(to_square) and this->get_y() == decode_y(to_square) - 2 and board[decode_x(to_square)][decode_y(to_square)] == 'O' and get_was_moved() == false) {
			switch_was_moved();
			return true;
		}
		if (this->get_x() > 0 and this->get_y() > 0 and board[decode_y(to_square)][decode_x(to_square)] != 'O' and this->get_x() == decode_x(to_square) + 1 and this->get_y() == decode_y(to_square) - 1) {
			cout << "asd";
			if (find_figure(arr, size, to_square)->get_color() == this->get_color()) {
				cout << "Нельзя бить свою фигуру"<< endl;
			}
			if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
				find_figure(arr, size, to_square)->die();
				switch_was_moved();
				return true;
			}
		}
		if (this->get_x() < 7 and this->get_y() > 0 and board[decode_y(to_square)][decode_x(to_square)] != 'O' and this->get_x() == decode_x(to_square) - 1 and this->get_y() == decode_y(to_square) - 1) {
			cout << "dsa";
			if (find_figure(arr, size, to_square)->get_color() == this->get_color()) {
				cout << "Нельзя бить свою фигуру" << endl;
			}
			if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
				find_figure(arr, size, to_square)->die();
				switch_was_moved();
				return true;
			}
		}
	}
	if (get_color() == "white") {
		
		if (this->get_x() == decode_x(to_square) and this->get_y() == decode_y(to_square) + 1 and board[decode_y(to_square)][decode_x(to_square)] == 'O') {
			
			switch_was_moved();
			return true;
		}
		if (this->get_x() == decode_x(to_square) and this->get_y() == decode_y(to_square) + 2 and board[decode_y(to_square)][decode_x(to_square)] == 'O' and get_was_moved() == false) {
			switch_was_moved();
			return true;
		}
		if (this->get_x()>0 and this->get_y() > 0 and board[decode_y(to_square)][decode_x(to_square)] != 'O' and this->get_x() == decode_x(to_square)+1 and this->get_y() == decode_y(to_square) + 1) {
			if (find_figure(arr,size,to_square)->get_color() == this->get_color()) {
				cout << "Нельзя бить свою фигуру" << endl;
			}
			if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
				find_figure(arr, size, to_square)->die();
				switch_was_moved();
				return true;
			}
		}
		if (this->get_x() < 7 and this->get_y() > 0 and board[decode_y(to_square)][decode_x(to_square)] != 'O' and this->get_x() == decode_x(to_square) - 1 and this->get_y() == decode_y(to_square) + 1) {
			if (find_figure(arr, size, to_square)->get_color() == this->get_color()) {
				cout << "Нельзя бить свою фигуру" << endl;
			}
			if (find_figure(arr, size, to_square)->get_color() != this->get_color()) {
				find_figure(arr, size, to_square)->die();
				switch_was_moved();
				return true;
			}
		}
	}

	
	return false;
}

