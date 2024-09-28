#pragma once
#include <string>
#include "Figure.h"

using namespace std;

class Queen :public Figure {
public:

	Queen(int x, int y, string color, char letter);

	Queen();

	bool get_grid(vector <Figure*>& arr, int size, char board[8][8], string to_square) override;
};