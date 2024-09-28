#include "is_my_figure.h"


bool is_my_figure(string square, vector <Figure*>& arr, int size , string color)
{
    for (int i = 0; i < size; i++) {
        if (arr[i]->get_x() == decode_x(square) and arr[i]->get_y() == decode_y(square)) {
            if (arr[i]->get_color() == color) {
                return true;
            }
        }
    }
    return false;
}
