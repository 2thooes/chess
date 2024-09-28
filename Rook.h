#pragma once
#include <string>
#include "Figure.h"

using namespace std;

class Rook :public Figure {

public:

	Rook(int x, int y, string color, char letter);

	Rook();

	bool get_grid(vector <Figure*>& arr, int size, char board[8][8], string to_square) override;
};

