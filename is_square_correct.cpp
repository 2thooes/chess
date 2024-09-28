#include "is_square_correct.h"

bool is_square_correct(string square)
{
	if (square[0] != 'a' and square[0] != 'b' and square[0] != 'c' and square[0] != 'd' and square[0] != 'e' and square[0] != 'f' and square[0] != 'g' and square[0] != 'h') {
		return false;
	}
	if (square[1] != '1' and square[1] != '2' and square[1] != '3' and square[1] != '4' and square[1] != '5' and square[1] != '6' and square[1] != '7' and square[1] != '8') {
		return false;
	}
	return true;
}
