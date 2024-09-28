#pragma once
#include <string>
#include "Figure.h"

using namespace std;

class King :public Figure {

public:

	King(int x, int y, string color, char letter);

	King();

	bool get_grid(vector <Figure*>& arr, int size, char board[8][8], string to_square) override;
};

