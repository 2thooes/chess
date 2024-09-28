#include "is_square_empty.h"



bool is_square_empty(string square, char board[8][8])
{
    //cout << decode_x(square) << decode_y(square) << endl; //на всякий случай
    if (board[decode_y(square)][decode_x(square)] != 'O') {
        return true;
    }
    return false;
}
