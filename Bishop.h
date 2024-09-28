#pragma once
#include <string>
#include "Figure.h"

using namespace std;

class Bishop :public Figure {
public:

	Bishop(int x, int y, string color, char letter);

	Bishop();

	bool get_grid(vector <Figure*>& arr, int size, char board[8][8], string to_square) override;
};
