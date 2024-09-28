#include "decode_x.h"

int decode_x(string square) {
    switch (square[0]) {
    case('a'):
        return 0;
        break;
    case('b'):
        return 1;
        break;
    case('c'):
        return 2;
        break;
    case('d'):
        return 3;
        break;
    case('e'):
        return 4;
        break;
    case('f'):
        return 5;
        break;
    case('g'):
        return 6;
        break;
    case('h'):
        return 7;
        break;
    }
    return -1;// невозможно
}

