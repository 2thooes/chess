#include "decode_y.h"

int decode_y(string square) {
    switch (square[1]) {
    case('1')://аски таблица
        return 7;
        break;
    case('2'):
        return 6;
        break;
    case('3'):
        return 5;
        break;
    case('4'):
        return 4;
        break;
    case('5'):
        return 3;
        break;
    case('6'):
        return 2;
        break;
    case('7'):
        return 1;
        break;
    case('8'):
        return 0;
        break;
    }
    return -1;// невозможно
}
