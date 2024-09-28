#pragma once
#include <string>
#include "Figure.h"

using namespace std;

class Horse :public Figure {
public:

	Horse(int x, int y, string color, char letter);

	Horse();

	bool get_grid(vector <Figure*>& arr, int size, char board[8][8], string to_square) override;

};