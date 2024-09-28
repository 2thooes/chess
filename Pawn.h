#pragma once
#include <string>
#include <vector>
#include "Figure.h"

using namespace std;

class Pawn:public Figure{

public:

	Pawn(int x, int y, string color, char letter);

	Pawn();

	bool get_grid(vector <Figure*>& arr,int size,  char board[8][8], string to_square) override;

};
