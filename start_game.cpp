#include "start_game.h"
#include <iostream>
#include "turn.h"
#include "view.h"
using namespace std;

void start_game(vector <Figure*>& arr, int size, char board[8][8])
{
	bool is_white_turn = true; //Хотелось бы чтобы это значение бралось с файла
	cout << "Игра начата!" << endl;
	while (turn(arr , size , board , is_white_turn)) {
		if (is_white_turn) {
			is_white_turn = false;
			cout << "Ход черных" << endl;
		}
		else {
			is_white_turn = true;
			cout << "Ход белых" << endl;
		}
		view(arr, size, board);
	}
}
