#include "Find_figure.h"
Figure* find_figure(vector<Figure*>& arr, int size,int i,int j)
{
    for (int k = 0; k < size; k++) {
        if (arr[k]->get_x() == j and arr[k]->get_y() == i) {
            return arr[k];
        }
    }
    Figure* empty_figure = new Figure();
    return empty_figure;
}

Figure* find_figure(vector<Figure*>& arr, int size, string square)
{
    for (int k = 0; k < size; k++) {
        if (arr[k]->get_x() == decode_x(square) and arr[k]->get_y() == decode_y(square)) {
            return arr[k];
        }
    }
    Figure* empty_figure = new Figure();
    return empty_figure;
}
