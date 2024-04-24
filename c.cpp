#include <iostream>
#include <string>
#include "setup.h"
#include "length.h"
#include "Figure.h"
#include "view.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    char board[8][8];
    Figure* arr = new Figure[length()];
    setup(arr);
    view(arr, length(),board);
    delete[] arr;
    return 0;
}
